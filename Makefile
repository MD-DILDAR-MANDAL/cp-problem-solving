.PHONY: clean All

All:
	@echo "----------Building project:[ buySellStocks - Debug ]----------"
	@cd "buySellStocks" && "$(MAKE)" -f  "buySellStocks.mk"
clean:
	@echo "----------Cleaning project:[ buySellStocks - Debug ]----------"
	@cd "buySellStocks" && "$(MAKE)" -f  "buySellStocks.mk" clean
