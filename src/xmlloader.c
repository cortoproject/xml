/*
 * corto_xml_loader.c
 *
 *  Created on: Aug 30, 2012
 *      Author: sander
 */

#include "corto/fmt/xml/xml_deser.h"

int cortomain(int argc, char* argv[]) {
    CORTO_UNUSED(argc);
    CORTO_UNUSED(argv);
    corto_loaderRegister("xml", corto_deserXml, NULL);
    return 0;
}
