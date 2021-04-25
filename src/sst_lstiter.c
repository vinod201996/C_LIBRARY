/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

void sst_lstiter(t_list *lst, void (*f)(t_list*elem))
{
	t_list	*cursor;

	cursor = lst;
	if (lst != NULL || f != NULL)
	{
		while (cursor)
		{
			(*f)(cursor);
			cursor = cursor->next;
		}
	}
}