#!/bin/sh
cp headers/Bureaucrat.hpp headers/Form.hpp
sed -i '' 's/Bureaucrat/Form/g' headers/Form.hpp
sed -i '' 's/BUREAUCRAT/FORM/g' headers/Form.hpp

cp srcs/Bureaucrat.cpp srcs/Form.hpp
sed -i '' 's/Bureaucrat/Form/g' srcs/Form.hpp
