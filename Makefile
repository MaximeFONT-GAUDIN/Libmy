all			:	
				make -C ./lib/my

clean		:
				make -C ./lib/my clean
				make -C ./tests clean

fclean		:	clean
				make -C ./lib/my fclean
				make -C ./tests fclean

re			:	fclean all

test		:
				make -C ./tests all

report		:	test
				lcov --capture --initial --directory . --output-file coverage_base.info
				lcov --capture --directory . --output-file coverage_test.info
				lcov --add-tracefile coverage_base.info --add-tracefile coverage_test.info --output-file coverage_merge.info
				lcov --remove coverage_merge.info "`pwd`/src/test/*" -o coverage.info
				genhtml -o $@ -t "couverture de code des tests" coverage.info
				$(OPEN) $@/index.html

.PHONY		:	all clean fclean re test report
