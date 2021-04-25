/******************************************************************************

Author: Vinod Ghadge
Email: vinod@sea-shore.tech

*******************************************************************************/

#include "libsst.h"

t_list	*sst_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;
	t_list	*tmpresult;
	t_list	*tmplst;

	if (lst == NULL || f == NULL){
		return (NULL);
	}

	tmplst = f(lst);
	if ((result = sst_lstnew(tmplst->content, tmplst->content_size)))
	{
		tmpresult = result;
		lst = lst->next;
		while (lst != NULL)
		{
			tmplst = (*f)(lst);
			if (!(tmpresult->next = sst_lstnew(tmplst->content, tmplst->content_size))){
				return (NULL);
			}
			tmpresult = tmpresult->next;
			lst = lst->next;
		}
	}
	return (result);
}
