/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 17:48:56 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/08 18:34:11 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "munit/munit.h"
#include "libft.h"
#include <stdlib.h>

MunitResult	ft_atoi(const MunitParameter params[], void *data);
{
	// ft_atoi
	munit_assert_equal(ft_atoi("0"), atoi("0"));
	munit_assert_equal(ft_atoi("-5"), atoi("-5"));
	munit_assert_equal(ft_atoi("1001"), atoi("1001"));
	munit_assert_equal(ft_atoi(""), atoi(""));
	munit_assert_equal(ft_atoi("2147483647"), atoi("2147483647"));
	munit_assert_equal(ft_atoi("-2147483648"), atoi("-2147483648"));
	munit_assert_equal(ft_atoi("    \n666"), atoi("    \n666"));
	munit_assert_equal(ft_atoi("fjkdffd444"), atoi("fjkdffd444"));
	munit_assert_equal(ft_atoi("   54.gkrrgkr"), atoi("   54.gkrrgkr"));
	munit_assert_equal(ft_atoi("+-+--+46"), atoi("+-+--+46"));
	return (MUNIT_OK);
}

MunitTest tests[] = {
{
	"/ft_atoi",
	ft_atoi,
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
