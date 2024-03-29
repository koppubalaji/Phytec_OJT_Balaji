DESCRIPTION = "helloworld"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "file://hello_world.c"

S = "${WORKDIR}"
do_compile() {
    ${CC} hello_world.c ${LDFLAGS} -o helloworld 
}

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${S}/helloworld ${D}${bindir}    
}

PROVIDES += "my-phy"
