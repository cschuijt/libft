/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 17:48:56 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/08 20:34:09 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "munit.h"
#include "libft.h"
#include <stdlib.h>
#include <ctype.h>

MunitResult	ft_atoi_test(const MunitParameter params[], void *data)
{
	munit_assert_int(ft_atoi("0"), ==, atoi("0"));
	munit_assert_int(ft_atoi("-5"), ==, atoi("-5"));
	munit_assert_int(ft_atoi("-----10"), ==, atoi("-----10"));
	munit_assert_int(ft_atoi("----805"), ==, atoi("----805"));
	munit_assert_int(ft_atoi("1001   23432"), ==, atoi("1001   23432"));
	munit_assert_int(ft_atoi(""), ==, atoi(""));
	munit_assert_int(ft_atoi("2147483647"), ==, atoi("2147483647"));
	munit_assert_int(ft_atoi("-2147483648"), ==, atoi("-2147483648"));
	munit_assert_int(ft_atoi("    \n666"), ==, atoi("    \n666"));
	munit_assert_int(ft_atoi("fjkdffd444"), ==, atoi("fjkdffd444"));
	munit_assert_int(ft_atoi("   54.gkrrgkr"), ==, atoi("   54.gkrrgkr"));
	munit_assert_int(ft_atoi("+-+--+46"), ==, atoi("+-+--+46"));
	munit_assert_int(ft_atoi("+46"), ==, atoi("+46"));
	munit_assert_int(ft_atoi("asdf"), ==, atoi("asdf"));
	munit_assert_int(ft_atoi("8f7d2kx7"), ==, atoi("8f7d2kx7"));
	munit_assert_int(ft_atoi("-"), ==, atoi("-"));
	munit_assert_int(ft_atoi("+"), ==, atoi("+"));
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