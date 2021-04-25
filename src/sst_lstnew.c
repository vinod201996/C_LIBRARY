/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"
#include <stdlib.h>

t_list	*sst_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*rcontent;
	size_t	rsize;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content != NULL)
	{
		rcontent = sst_memalloc(content_size);
		rsize = content_size;
		sst_memcpy(rcontent, content, content_size);
		new->content = rcontent;
		new->content_size = rsize;
	}
	else
	{
		new->content = NULL;
		new->content_size = 0;
	}
	new->next = NULL;
	return (new);
}
