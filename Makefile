.PHONY: clean All

All:
	@echo "----------Building project:[ 1 nsu - Debug ]----------"
	@"$(MAKE)" -f  "1 nsu.mk"
clean:
	@echo "----------Cleaning project:[ 1 nsu - Debug ]----------"
	@"$(MAKE)" -f  "1 nsu.mk" clean
