DESCRIPTION = "Simple helloworld application"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "file://app.c \
	   file://sub.c \
	   file://mul.c \
	   file://div.c \
	   file://add.c \
	   file://mymath.h"
	   
S = "${WORKDIR}"

do_compile() {
    ${CC} *.c ${LDFLAGS} -o calciapp
}

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${S}/calciapp ${D}${bindir}
    
}
