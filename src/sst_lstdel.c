/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

void sst_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst != NULL && del != NULL)
	{
		sst_lstdel(&((*alst)->next), del);
		sst_lstdelone(alst, del);
	}
	if(*alst == NULL && del != NULL){
		return;	
	}
}
