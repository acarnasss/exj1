# ifndef BAZINGA_H
# define BAZINGA_H

typedef struct s_config
{
	int height;
	int width;
	// int len;
	// int comptheiht;
	// int comptwight;
}	t_config;

# define BAZINGA	"BAZINGA"
# define FILLER	'.'
# define ERRORUSAGE "Error: usage ./a.out <width> <height>.\n"
# define ERRORWIDTH "Error: width must contain only digits.\n"
# define ERRORHEIGHT "Error: height must contain only digits.\n"
# define ERRORMALLOC "Error: malloc failed.\n"

# endif