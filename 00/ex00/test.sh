#!/bin/sh

# This function doesn't work
test_megaphone () {

	echo ${@}
	printf "Test with \"%s\"\n" "${1}"
	runs ${1}
	./megaphone ${1}
	if [ "$(./megaphone "${1}")" = "${2}" ]
	then
		printf "OK\n"
	else
		printf "KO\n"
		printf "Expected: \"%s\"\n" "${2}"
	fi

	printf "\n"

}

if [ "$(./megaphone 'shhhhh... I think the students are asleep...')" = 'SHHHHH... I THINK THE STUDENTS ARE ASLEEP...' ]
then
	echo Good
else
	echo bad
fi

if [ "$(./megaphone arg1 "arg 2")" = 'ARG1ARG 2' ]
then
	echo Good
else
	echo error
fi

if [ "$(./megaphone Damnit ' ! ' 'Sorry students, I thought this thing was off.')" = 'DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.' ]
then
	echo Good
else
	echo bad
fi

if [ "$(./megaphone)" = '* LOUD AND UNBEARABLE FEEDBACK NOISE *' ]
then
	echo Good
else
	echo bad
fi

#test_megaphone 'shhhhh... I think the students are asleep...' "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
#test_megaphone "ne Damnit \" ! \" \"Sorry students, I thought this thing was off.\"" "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
#test_megaphone "" "* LOUD AND UNBEARABLE FEEDBACK NOISE *"
