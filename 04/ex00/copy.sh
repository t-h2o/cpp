#!/bin/sh

regexfile () {
	echo sed -i "'s/${1}/Wrong${1}/g'" "headers/Wrong${1}.hpp"
	echo sed -i "'s/${1^^}/WRONG${1^^}/g'" "headers/Wrong${1}.hpp"
	echo sed -i "'s/${1}/Wrong${1}/g'" "srcs/Wrong${1}.cpp"
	 sed -i "s/${1}/Wrong${1}/g" "headers/Wrong${1}.hpp"
	 sed -i "s/${1^^}/WRONG${1^^}/g" "headers/Wrong${1}.hpp"
	 sed -i "s/${1}/Wrong${1}/g" "srcs/Wrong${1}.cpp"
}

copyfile () {
	echo cp srcs/"${1}.cpp" srcs/Wrong"${1}.cpp"
	echo cp headers/"${1}.hpp" headers/Wrong"${1}.hpp"
	cp srcs/"${1}.cpp" srcs/Wrong"${1}.cpp"
	cp headers/"${1}.hpp" headers/Wrong"${1}.hpp"
}

main () {
	echo Your: "${1}" "${1^^}" "${1,,}"
	
	
	echo Your: "${1}" "${1,,}"

	copyfile "${1}"
	regexfile "${1}"
}

main "${1}"
