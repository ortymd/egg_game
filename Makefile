all:	tun_tap_interface

.PHONY: tun_tap_interface

tun_tap_interface:
	$(MAKE)	-C tun_tap_interface/
