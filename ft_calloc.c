void *ft_calloc(size_t len, size_t n)
{
  char *s;
  
  s = malloc(len * n);
  bzero(s, len);
  return ((void *)s);
}
