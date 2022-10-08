/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 17:48:56 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/09 00:09:14 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "munit.h"
#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>

MunitResult	ft_atoi_test(const MunitParameter params[], void *data)
{
	munit_assert_int(atoi("0"), ==, ft_atoi("0"));
	munit_assert_int(atoi("-5"), ==, ft_atoi("-5"));
	munit_assert_int(atoi("-----10"), ==, ft_atoi("-----10"));
	munit_assert_int(atoi("----805"), ==, ft_atoi("----805"));
	munit_assert_int(atoi("1001   23432"), ==, ft_atoi("1001   23432"));
	munit_assert_int(atoi(""), ==, ft_atoi(""));
	munit_assert_int(atoi("2147483647"), ==, ft_atoi("2147483647"));
	munit_assert_int(atoi("-2147483648"), ==, ft_atoi("-2147483648"));
	munit_assert_int(atoi("    \n666"), ==, ft_atoi("    \n666"));
	munit_assert_int(atoi("fjkdffd444"), ==, ft_atoi("fjkdffd444"));
	munit_assert_int(atoi("   54.gkrrgkr"), ==, ft_atoi("   54.gkrrgkr"));
	munit_assert_int(atoi("+-+--+46"), ==, ft_atoi("+-+--+46"));
	munit_assert_int(atoi("+46"), ==, ft_atoi("+46"));
	munit_assert_int(atoi("asdf"), ==, ft_atoi("asdf"));
	munit_assert_int(atoi("8f7d2kx7"), ==, ft_atoi("8f7d2kx7"));
	munit_assert_int(atoi("-"), ==, ft_atoi("-"));
	munit_assert_int(atoi("+"), ==, ft_atoi("+"));
	return (MUNIT_OK);
}

MunitResult	ft_strlen_test(const MunitParameter params[], void *data)
{
	munit_assert_int(strlen("asdf"), ==, ft_strlen("asdf"));
	munit_assert_int(strlen("   "), ==, ft_strlen("   "));
	munit_assert_int(strlen(""), ==, ft_strlen(""));
	munit_assert_int(strlen("asd\nfds"), ==, ft_strlen("asd\nfds"));
	munit_assert_int(strlen("1234567890"), ==, ft_strlen("1234567890"));
	munit_assert_int(strlen("a slightly longer string of words"), ==, ft_strlen("a slightly longer string of words"));
	munit_assert_int(strlen("asdf\0a1234"), ==, ft_strlen("asdf\0a1234"));
	return (MUNIT_OK);
}

MunitResult	ft_substr_test(const MunitParameter params[], void *data)
{
	munit_assert_string_equal(ft_substr("asdfghj", 0, 3), "asd");
	munit_assert_string_equal(ft_substr("asdfghj", 0, 20), "asdfghj");
	munit_assert_string_equal(ft_substr("", 0, 3), "");
	munit_assert_string_equal(ft_substr("", 0, 0), "");
	munit_assert_string_equal(ft_substr("asdf", 0, 0), "");
	munit_assert_string_equal(ft_substr("asdf", -5, -3), "");
	munit_assert_string_equal(ft_substr("asdf\0fdsa", 0, 6), "asdf");
	munit_assert_string_equal(ft_substr("a\r \ndfghj", 0, 5), "a\r \nd");
	munit_assert_string_equal(ft_substr("asdfghj qwer", 8, 3), "qwe");
	munit_assert_string_equal(ft_substr("asdfghj qwer", 11, 3), "r");
	munit_assert_string_equal(ft_substr("asdfghj qwer", 6, 12), "j qwer");
	return (MUNIT_OK);
}

MunitResult	ft_itoa_test(const MunitParameter params[], void *data)
{
	munit_assert_string_equal(ft_itoa(1), "1");
	munit_assert_string_equal(ft_itoa(2147483647), "2147483647");
	munit_assert_string_equal(ft_itoa(5000), "5000");
	munit_assert_string_equal(ft_itoa(-44), "-44");
	munit_assert_string_equal(ft_itoa(-6000), "-6000");
	munit_assert_string_equal(ft_itoa(-2147483648), "-2147483648");
	munit_assert_string_equal(ft_itoa(0), "0");
	return (MUNIT_OK);
}

MunitResult	ft_strchr_test(const MunitParameter params[], void *data)
{
	char	*str;

	str = "Hello world! This is a very long str1ng w1th funny cha\nracters.\0z";
	munit_assert_ptr_equal(strchr(str, 'w'), ft_strchr(str, 'w'));
	munit_assert_ptr_equal(strchr(str, 'e'), ft_strchr(str, 'e'));
	munit_assert_ptr_equal(strchr(str, 'H'), ft_strchr(str, 'H'));
	munit_assert_ptr_equal(strchr(str, 'h'), ft_strchr(str, 'h'));
	munit_assert_ptr_equal(strchr(str, '!'), ft_strchr(str, '!'));
	munit_assert_ptr_equal(strchr(str, '1'), ft_strchr(str, '1'));
	munit_assert_ptr_equal(strchr(str, '.'), ft_strchr(str, '.'));
	munit_assert_ptr_equal(strchr(str, '\0'), ft_strchr(str, '\0'));
	munit_assert_ptr_equal(strchr(str, 'x'), ft_strchr(str, 'x'));
	munit_assert_ptr_equal(strchr(str, '\n'), ft_strchr(str, '\n'));
	munit_assert_ptr_equal(strchr(str, 'z'), ft_strchr(str, 'z'));
	return (MUNIT_OK);
}

MunitResult	ft_isalnum_test(const MunitParameter params[], void *data)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		munit_assert_int((isalnum(i) > 0), ==, (ft_isalnum(i) > 0));
		i++;
	}
	return (MUNIT_OK);
}

MunitResult	ft_isalpha_test(const MunitParameter params[], void *data)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		munit_assert_int((isalpha(i) > 0), ==, (ft_isalpha(i) > 0));
		i++;
	}
	return (MUNIT_OK);
}

MunitResult	ft_isascii_test(const MunitParameter params[], void *data)
{
	int	i;

	i = -1;
	while (i < 180)
	{
		munit_assert_int((isascii(i) > 0), ==, (ft_isascii(i) > 0));
		i++;
	}
	return (MUNIT_OK);
}

MunitResult	ft_isdigit_test(const MunitParameter params[], void *data)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		munit_assert_int((isdigit(i) > 0), ==, (ft_isdigit(i) > 0));
		i++;
	}
	return (MUNIT_OK);
}

MunitResult	ft_isprint_test(const MunitParameter params[], void *data)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		munit_assert_int((isprint(i) > 0), ==, (ft_isprint(i) > 0));
		i++;
	}
	return (MUNIT_OK);
}

MunitResult	ft_tolower_test(const MunitParameter params[], void *data)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		munit_assert_char(tolower(i), ==, ft_tolower(i));
		i++;
	}
	return (MUNIT_OK);
}

MunitResult	ft_toupper_test(const MunitParameter params[], void *data)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		munit_assert_char(toupper(i), ==, ft_toupper(i));
		i++;
	}
	return (MUNIT_OK);
}

MunitTest tests[] = {
{
	"/ft_atoi",
	ft_atoi_test,
	NULL,
	NULL,
	MUNIT_TEST_OPTION_NONE,
	NULL
},
{
	"/ft_isalnum",
	ft_isalnum_test,
	NULL,
	NULL,
	MUNIT_TEST_OPTION_NONE,
	NULL
},
{
	"/ft_isalpha",
	ft_isalpha_test,
	NULL,
	NULL,
	MUNIT_TEST_OPTION_NONE,
	NULL
},
{
	"/ft_isascii",
	ft_isascii_test,
	NULL,
	NULL,
	MUNIT_TEST_OPTION_NONE,
	NULL
},
{
	"/ft_isdigit",
	ft_isdigit_test,
	NULL,
	NULL,
	MUNIT_TEST_OPTION_NONE,
	NULL
},
{
	"/ft_isprint",
	ft_isprint_test,
	NULL,
	NULL,
	MUNIT_TEST_OPTION_NONE,
	NULL
},
{
	"/ft_itoa",
	ft_itoa_test,
	NULL,
	NULL,
	MUNIT_TEST_OPTION_NONE,
	NULL
},
{
	"/ft_strchr",
	ft_strchr_test,
	NULL,
	NULL,
	MUNIT_TEST_OPTION_NONE,
	NULL
},
{
	"/ft_strlen",
	ft_strlen_test,
	NULL,
	NULL,
	MUNIT_TEST_OPTION_NONE,
	NULL
},
{
	"/ft_substr",
	ft_substr_test,
	NULL,
	NULL,
	MUNIT_TEST_OPTION_NONE,
	NULL
},
{
	"/ft_tolower",
	ft_tolower_test,
	NULL,
	NULL,
	MUNIT_TEST_OPTION_NONE,
	NULL
},
{
	"/ft_toupper",
	ft_toupper_test,
	NULL,
	NULL,
	MUNIT_TEST_OPTION_NONE,
	NULL
},
{
	NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL
}
};

static const MunitSuite suite = {
	"/libft",
	tests,
	NULL,
	1,
	MUNIT_SUITE_OPTION_NONE
};

int	main(int argc, char *argv[MUNIT_ARRAY_PARAM(argc + 1)])
{
	return (munit_suite_main(&suite, NULL, argc, argv));
}
