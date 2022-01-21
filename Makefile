.PHONY: clean All

All:
	@echo "----------Building project:[ good_logic_2 - Debug ]----------"
	@cd "good_logic_2" && "$(MAKE)" -f  "good_logic_2.mk"
clean:
	@echo "----------Cleaning project:[ good_logic_2 - Debug ]----------"
	@cd "good_logic_2" && "$(MAKE)" -f  "good_logic_2.mk" clean
