/** @file cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.1
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name */
#define CMDLINE_PARSER_PACKAGE PACKAGE
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  char * outfile_arg;	/**< @brief Output filename.  */
  char * outfile_orig;	/**< @brief Output filename original value given at command line.  */
  const char *outfile_help; /**< @brief Output filename help description.  */
  int gtf_flag;	/**< @brief GTF output (default=off).  */
  const char *gtf_help; /**< @brief GTF output help description.  */
  int tabular_flag;	/**< @brief Tab delimited output (default=off).  */
  const char *tabular_help; /**< @brief Tab delimited output help description.  */
  int best_only_flag;	/**< @brief Print only best hit per alignment (default=off).  */
  const char *best_only_help; /**< @brief Print only best hit per alignment help description.  */
  int best_region_flag;	/**< @brief Print all best non-overlapping hits per alignment (default=off).  */
  const char *best_region_help; /**< @brief Print all best non-overlapping hits per alignment help description.  */
  char * pars_arg;	/**< @brief String with parameters.  */
  char * pars_orig;	/**< @brief String with parameters original value given at command line.  */
  const char *pars_help; /**< @brief String with parameters help description.  */
  int stop_early_flag;	/**< @brief Don't calculate p-values if below cutoff (default=off).  */
  const char *stop_early_help; /**< @brief Don't calculate p-values if below cutoff help description.  */
  int num_samples_arg;	/**< @brief Number of samples.  */
  char * num_samples_orig;	/**< @brief Number of samples original value given at command line.  */
  const char *num_samples_help; /**< @brief Number of samples help description.  */
  float cutoff_arg;	/**< @brief p-value cutoff.  */
  char * cutoff_orig;	/**< @brief p-value cutoff original value given at command line.  */
  const char *cutoff_help; /**< @brief p-value cutoff help description.  */
  char * debug_file_arg;	/**< @brief Debug file.  */
  char * debug_file_orig;	/**< @brief Debug file original value given at command line.  */
  const char *debug_file_help; /**< @brief Debug file help description.  */
  int eps_flag;	/**< @brief Postscript output (default=off).  */
  const char *eps_help; /**< @brief Postscript output help description.  */
  float eps_cutoff_arg;	/**< @brief Postscript output p-value cutoff.  */
  char * eps_cutoff_orig;	/**< @brief Postscript output p-value cutoff original value given at command line.  */
  const char *eps_cutoff_help; /**< @brief Postscript output p-value cutoff help description.  */
  char * eps_dir_arg;	/**< @brief Postscript directory.  */
  char * eps_dir_orig;	/**< @brief Postscript directory original value given at command line.  */
  const char *eps_dir_help; /**< @brief Postscript directory help description.  */
  char * limit_arg;	/**< @brief limit to species.  */
  char * limit_orig;	/**< @brief limit to species original value given at command line.  */
  const char *limit_help; /**< @brief limit to species help description.  */
  int blosum_arg;	/**< @brief BLOSUM matrix version.  */
  char * blosum_orig;	/**< @brief BLOSUM matrix version original value given at command line.  */
  const char *blosum_help; /**< @brief BLOSUM matrix version help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int outfile_given ;	/**< @brief Whether outfile was given.  */
  unsigned int gtf_given ;	/**< @brief Whether gtf was given.  */
  unsigned int tabular_given ;	/**< @brief Whether tabular was given.  */
  unsigned int best_only_given ;	/**< @brief Whether best-only was given.  */
  unsigned int best_region_given ;	/**< @brief Whether best-region was given.  */
  unsigned int pars_given ;	/**< @brief Whether pars was given.  */
  unsigned int stop_early_given ;	/**< @brief Whether stop-early was given.  */
  unsigned int num_samples_given ;	/**< @brief Whether num-samples was given.  */
  unsigned int cutoff_given ;	/**< @brief Whether cutoff was given.  */
  unsigned int debug_file_given ;	/**< @brief Whether debug-file was given.  */
  unsigned int eps_given ;	/**< @brief Whether eps was given.  */
  unsigned int eps_cutoff_given ;	/**< @brief Whether eps-cutoff was given.  */
  unsigned int eps_dir_given ;	/**< @brief Whether eps-dir was given.  */
  unsigned int limit_given ;	/**< @brief Whether limit was given.  */
  unsigned int blosum_given ;	/**< @brief Whether blosum was given.  */

  char **inputs ; /**< @brief unamed options (options without names) */
  unsigned inputs_num ; /**< @brief unamed options number */
} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char * const *argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char * const *argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char * const *argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */
