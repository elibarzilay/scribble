
/* libguile header for MzScheme implementation */

#ifdef _UsesMzScheme_
typedef Scheme_Object *SCM;
#else
typedef struct {} *SCM;

extern SCM scheme_true, scheme_false, scheme_null, scheme_void;
#endif

#define SCM_BOOL_T scheme_true
#define SCM_BOOL_F scheme_false
#define SCM_EOL scheme_null
#define SCM_UNSPECIFIED scheme_void

#define GH_EOL_MARKER 0L

typedef SCM (*SCM_FN)();
typedef SCM (*SCM_ARGV_FN)(int argc, SCM argv[]);
typedef void (*SCM_MAIN_FN)(int argc, char *argv[]);

#define GH_DEFER_INTS /**/
#define GH_ALLOW_INTS /**/

/* Remainder is generated by mkghsrc */

void gh_enter(int argc , char **argv , SCM_MAIN_FN prc );
SCM gh_eval_str(char* s );
SCM gh_eval_file(char* file );
void gh_new_procedure(char* name , SCM_FN fn , int required , int optional , int restp );
SCM gh_bool(int x );
SCM gh_long2scm(long x );
SCM gh_ulong2scm(unsigned long x );
SCM gh_double2scm(double x );
SCM gh_char2scm(char x );
SCM gh_str2scm(char* x , int len );
SCM gh_str02scm(char* x );
void gh_set_substr(char* x , SCM dst , int start , int len );
SCM gh_symbol2scm(char* x );
int gh_scm2bool(SCM x );
int gh_scm2char(SCM x );
unsigned long gh_scm2ulong(SCM x );
long gh_scm2long(SCM x );
double gh_scm2double(SCM x );
char* gh_scm2newstr(SCM x , int* len );
void gh_get_substr(SCM s , char* x , int start , int len );
char* gh_symbol2newstr(SCM x , int* len );
int gh_boolean_p(SCM x );
int gh_symbol_p(SCM x );
int gh_char_p(SCM x );
int gh_vector_p(SCM x );
int gh_pair_p(SCM x );
int gh_procedure_p(SCM x );
int gh_string_p(SCM x );
int gh_exact_p(SCM x );
int gh_inexact_p(SCM x );
int gh_eq_p(SCM x , SCM y );
int gh_eqv_p(SCM x , SCM y );
int gh_equal_p(SCM x , SCM y );
void gh_define(char* name , SCM v );
SCM gh_cons(SCM car , SCM cdr );
SCM gh_list(SCM v , ...);
int gh_ilength(SCM ls );
void gh_set_car(SCM pr , SCM val );
void gh_set_cdr(SCM pr , SCM val );
SCM gh_caaaar(SCM pr );
SCM gh_caaadr(SCM pr );
SCM gh_caadar(SCM pr );
SCM gh_caaddr(SCM pr );
SCM gh_caaar(SCM pr );
SCM gh_caadr(SCM pr );
SCM gh_cadaar(SCM pr );
SCM gh_cadadr(SCM pr );
SCM gh_caddar(SCM pr );
SCM gh_cadddr(SCM pr );
SCM gh_cadar(SCM pr );
SCM gh_caddr(SCM pr );
SCM gh_caar(SCM pr );
SCM gh_cadr(SCM pr );
SCM gh_cdaaar(SCM pr );
SCM gh_cdaadr(SCM pr );
SCM gh_cdadar(SCM pr );
SCM gh_cdaddr(SCM pr );
SCM gh_cdaar(SCM pr );
SCM gh_cdadr(SCM pr );
SCM gh_cddaar(SCM pr );
SCM gh_cddadr(SCM pr );
SCM gh_cdddar(SCM pr );
SCM gh_cddddr(SCM pr );
SCM gh_cddar(SCM pr );
SCM gh_cdddr(SCM pr );
SCM gh_cdar(SCM pr );
SCM gh_cddr(SCM pr );
SCM gh_car(SCM pr );
SCM gh_cdr(SCM pr );
SCM gh_vector(int len , SCM fill );
SCM gh_vref(SCM v , int i );
SCM gh_vset(SCM v , int i , SCM x );
int gh_vector_length(SCM v );
SCM gh_make_subr(SCM_FN fn , int required , int optional , int varp , char* doc );
SCM gh_apply(SCM rator , SCM rands );
SCM gh_call0(SCM proc );
SCM gh_call1(SCM proc , SCM arg );
SCM gh_call2(SCM proc , SCM arg1 , SCM arg2 );
SCM gh_call3(SCM proc , SCM arg1 , SCM arg2 , SCM arg3 );
int lgh_obj_length(SCM obj );
SCM gh_catch(SCM key , SCM thunk , SCM handler );
SCM gh_throw(SCM key , SCM args );
SCM gh_curry(SCM proc , SCM first );
void gh_new_argv_procedure(char* name , SCM_ARGV_FN fn , int required , int optional );
SCM gh_make_argv_subr(SCM_ARGV_FN fn , int required , int optional , char* doc );
SCM gh_apply_argv(SCM rator , int argc , SCM* argv );
void gh_lock(SCM v );
void gh_unlock(SCM v );
int gh_fits_C_long_p(SCM x );
int gh_fits_C_unsigned_long_p(SCM x );