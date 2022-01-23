.PHONY: clean All

All:
	@echo "----------Building project:[ recursion_no_of_squares - Debug ]----------"
	@cd "recursion_no_of_squares" && "$(MAKE)" -f  "recursion_no_of_squares.mk"
clean:
	@echo "----------Cleaning project:[ recursion_no_of_squares - Debug ]----------"
	@cd "recursion_no_of_squares" && "$(MAKE)" -f  "recursion_no_of_squares.mk" clean
