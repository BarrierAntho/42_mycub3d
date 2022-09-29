/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:05:35 by abarrier          #+#    #+#             */
/*   Updated: 2022/09/29 20:07:00 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <unistd.h>
# include <stdlib.h>
# include "ft_chartype.h"

char	*ft_formatchr(char *str, char *to_find);

/**
 * @brief Return the index to the first occurrence of the character c in the
 * string s.
 *
 * @param const char *s: String to be read | int c: Character to be searched
 * @return int | -1: is not existing, >= 0: index in the string
 */
int		ft_index(const char *s, int c);

/**
 * @brief Return the index to the last occurrence of the character c in the
 * string s.
 *
 * @param const char *s: String to be read | int c: Character to be searched
 * @return int | -1: is not existing, >= 0: index in the string
 */
int		ft_rindex(const char *s, int c);

/**
 * @brief Return a string array from string s splitted.
 *
 * @param const char *s: String to be read | int c: Character to be searched
 * @return char* | 0: is not existing, >= 0: pointer of the string array
 */
char	**ft_split(const char *s, int c);

/**
 * @brief Return a pointer to the first occurrence of the character c in the
 * string s.
 *
 * @param const char *s: String to be read | int c: Character to be searched
 * @return char* | 0: is not existing, >= 0: pointer in the string
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief Return a pointer to the first character different than a character
 * from charset in the string s.
 *
 * @param char *s: String to be read | const char *chrset: Character set
 * to be searched
 * @return char* | 0: is not existing, >= 0: pointer in the string
 */
char	*ft_strchrset_exclude(const char *s, const char *chrset);

/**
 * @brief Return a pointer of destination string.
 *
 * @param char *dst: String to be modified | const char *src: String to be copied
 * @return char* | 0: is not existing, >= 0: pointer of the destination string
 */
char	*ft_strcpy(char *dst, const char *src);

/**
 * @brief Return a copy of a string in a new one.
 *
 * @param const char *s: String to be copied
 * @return char* | 0: is not existing, >= 0: pointer of the new string
 */
char	*ft_strdup(const char *s);

/**
 * @brief Return a new string resulting of concatenation of s1 and s2
 *
 * @param const char *s1: String to be concatenated | char *s2: String to be
 * concatenated
 * @return char* | 0: is not existing, >= 0: pointer of the new string
 */
char	*ft_strjoin(const char *s1, const char *s2);

/**
 * @brief Return a pointer of destination string.
 *
 * @param char *dst: String to be modified | const char *src: String to be copied
 * size_t: Length of copy
 * @return char* | 0: is not existing, >= 0: pointer of the destination string
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * @brief Return a pointer of destination string.
 *
 * @param char *dst: String to be modified | const char *src: String to be copied
 * size_t: Length of copy
 * @return char* | 0: is not existing, >= 0: pointer of the destination string
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @brief Return the length of the string s.
 *
 * @param const char *s: String to be read
 * @return size_t 
 */
size_t	ft_strlen(const char *s);

/**
 * @brief Return the length of the string s.
 *
 * @param char *start: Begining pointer of the string to be read
 * char *end: Ending pointer of the string to be read.
 * @return size_t 
 */
size_t	ft_strlen_addr(char *start, char *end);

/**
 * @brief Return int of total char occurences in the string.
 *
 * @param const char *s: String to be read | int c: Character to be searched
 * @return int | 0: no occurence, >= 0: total of occurence
 */
int		ft_strnchar(const char *s, int c);

/**
 * @brief Return integer indicating the result of the comparison
 *
 * @param const char *s1: String to be read | const char *s2: String to be
 * compared | size_t n: Total of character to be compared
 * @return int | 0: occurence, != 0: no occurence
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Return a pointer of destination string.
 *
 * @param char *dst: String to be modified | const char *src: String to be copied
 * size_t n: Length of copied character
 * @return char* | 0: is not existing, >= 0: pointer of the destination string
 */
char	*ft_strncpy(char *dst, const char *src, size_t n);

/**
 * @brief Return a pointer to the last occurrence of the character c in the
 * string s.
 *
 * @param const char *s: String to be read | int c: Character to be searched
 * @return char* | 0: is not existing, >= 0: pointer in the string
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Return a pointer to the last character different than a character
 * from charset in the string s.
 *
 * @param const char *s: String to be read | const char *chrset: Character set
 * to be searched
 * @return char* | 0: is not existing, >= 0: pointer in the string
 */
char	*ft_strrchrset_exclude(const char *s, const char *chrset);

/**
 * @brief Return a pointer to the first char of the needle in the
 * string s.
 *
 * @param const char *s: String to be read | const char *needle: String to
 * be searched
 * @return char* | 0: is not existing, >= 0: pointer in the string
 */
char	*ft_strstr(const char *s, const char *needle);

/**
 * @brief Return a pointer of a new string without leading and trailing
 * space char (isspace).
 *
 * @param const char *s: String to be read
 * @return char* | 0: is not existing, >= 0: pointer of the new string
 */
char	*ft_strtrim(const char *s);
#endif
