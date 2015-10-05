#include "../includes/libft.h"

void	ft_cbufwrite(t_cbus *cbuf, char *s, size_t l)
{
	cbuf->wpos %= cbuf->size;
	cbuf->rpos %= cbuf->size;
	while (l--)
	{
		if (cbuf->wpos - cbuf->rpos == 1)
			cbuf->rpos++;
		cbuf->buf[cbuf->wpos++ % cbuf->size] = *s++;
	}
}