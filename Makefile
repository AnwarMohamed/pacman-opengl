.PHONY: clean All

All:
	@echo "----------Building project:[ pacman - Debug ]----------"
	@"$(MAKE)" -f  "pacman.mk"
clean:
	@echo "----------Cleaning project:[ pacman - Debug ]----------"
	@"$(MAKE)" -f  "pacman.mk" clean
