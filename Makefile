.PHONY: clean All

All:
	@echo "----------Building project:[ HELLO-WORLD - Debug ]----------"
	@cd "HELLO-WORLD" && "$(MAKE)" -f  "HELLO-WORLD.mk"
clean:
	@echo "----------Cleaning project:[ HELLO-WORLD - Debug ]----------"
	@cd "HELLO-WORLD" && "$(MAKE)" -f  "HELLO-WORLD.mk" clean
