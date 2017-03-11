/* $CORTO_GENERATED
 *
 * xml.c
 *
 * Only code written between the begin and end tags will be preserved
 * when the file is regenerated.
 */

#include <corto/ext/xml/xml.h>

/* $header() */
static int xml_loadFile(corto_string file, int argc, char* argv[], void* udata) {
    return corto_deserXml(file);
}
/* $end */

int xmlMain(int argc, char *argv[]) {
/* $begin(main) */

    corto_loaderRegister("xml", xml_loadFile, NULL);

    return 0;
/* $end */
}
