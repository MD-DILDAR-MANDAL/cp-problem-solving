.PHONY: clean All

All:
	@echo "----------Building project:[ codechef_solve - Debug ]----------"
	@cd "codechef_solve" && "$(MAKE)" -f  "codechef_solve.mk"
clean:
	@echo "----------Cleaning project:[ codechef_solve - Debug ]----------"
	@cd "codechef_solve" && "$(MAKE)" -f  "codechef_solve.mk" clean
