DYLIB     := vg_unlock.dylib
SRC       := vg_unlock.m
IPAPATCH  := ../../../IPAPatch-Vainglory/Assets/Dylibs

SDK       := iphoneos
ARCH      := arm64
CFLAGS    := -shared -framework Foundation -Wno-deprecated-declarations
INSTALL   := -install_name @executable_path/$(DYLIB)

.PHONY: build ipapatch-install clean

build: $(DYLIB)

$(DYLIB): $(SRC)
	xcrun -sdk $(SDK) clang -arch $(ARCH) $(CFLAGS) $(INSTALL) -o $@ $<
	codesign -f -s - $@

ipapatch-install: $(DYLIB)
	cp $(DYLIB) $(IPAPATCH)/$(DYLIB)
	@echo "Installed to $(IPAPATCH)/$(DYLIB)"

clean:
	rm -f $(DYLIB)
