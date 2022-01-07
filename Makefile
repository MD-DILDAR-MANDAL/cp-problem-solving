.PHONY: clean All

All:
	@echo "----------Building project:[ q2-priority_queue - Debug ]----------"
	@cd "q2-priority_queue" && "$(MAKE)" -f  "q2-priority_queue.mk"
clean:
	@echo "----------Cleaning project:[ q2-priority_queue - Debug ]----------"
	@cd "q2-priority_queue" && "$(MAKE)" -f  "q2-priority_queue.mk" clean
