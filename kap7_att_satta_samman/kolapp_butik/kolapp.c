#include "kolapp.h"

static int sist = 0;
static int betjanad = 0;

int ta_lapp(void) {
	return ++sist;
}

int betjana_kund(void) {
	if (betjanad == sist)
		return -1;		// Inga kunder kvar i kön.
	else
		return ++betjanad;	// Betjäna nästa kund.

}