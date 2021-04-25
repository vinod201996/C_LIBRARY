/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

void sst_lstadd(t_list **alst, t_list *new)
{
	if ((*alst != NULL) && new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
	if(*alst == NULL && new != NULL){
		*alst = new;
		return; 
	}
}
