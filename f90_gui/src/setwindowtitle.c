#include "../../config.h"
#define SETWINDOWTITLE_F90 FC_FUNC(setwindowtitle, SETWINDOWTITLE)
#include <gtk/gtk.h>

void SETWINDOWTITLE_F90(void **win, char *title)
{
  gtk_window_set_title(*win, (gchar *) title);
}