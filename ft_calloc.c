void *ft_calloc(size_t len, size_t n)
{
  char *s;
  
  if (!len || !n)
    return (NULL);
  s = malloc(len * n);
  if (!s)
    return (NULL);
  bzero(s, len);
  return ((void *)s);
}
