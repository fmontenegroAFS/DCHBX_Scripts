# 1 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c"
# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"








































































	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 266 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 505 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 508 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 532 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 566 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 589 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 613 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 692 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											int * col_name_len);
# 753 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 768 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   int const in_len,
                                   char * * const out_str,
                                   int * const out_len);
# 792 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 804 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 812 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 818 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char *buffer, long buf_size, unsigned int occurrence,
			    char *search_string, int offset, unsigned int param_val_len, 
			    char *param_name);

 
char *   lr_string (char * str);

 
# 916 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 923 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 945 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1021 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1050 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


# 1062 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


int vtc_connect(char * servername, int portnum, int options);
int vtc_disconnect(int pvci);
int vtc_get_last_error(int pvci);
int vtc_query_column(int pvci, char * columnName, int columnIndex, char * *outvalue);
int vtc_query_row(int pvci, int rowIndex, char * **outcolumns, char * **outvalues);
int vtc_send_message(int pvci, char * column, char * message, unsigned short *outRc);
int vtc_send_if_unique(int pvci, char * column, char * message, unsigned short *outRc);
int vtc_send_row1(int pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
int vtc_update_message(int pvci, char * column, int index , char * message, unsigned short *outRc);
int vtc_update_message_ifequals(int pvci, char	*columnName, int index,	char * message, char	*ifmessage,	unsigned short 	*outRc);
int vtc_update_row1(int pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
int vtc_retrieve_message(int pvci, char * column, char * *outvalue);
int vtc_retrieve_messages1(int pvci, char * columnNames, char * delimiter, char * **outvalues);
int vtc_retrieve_row(int pvci, char * **outcolumns, char * **outvalues);
int vtc_increment(int pvci, char * column, int index , int incrValue, int *outValue);
int vtc_clear_message(int pvci, char * column, int index , unsigned short *outRc);
int vtc_clear_column(int pvci, char * column, unsigned short *outRc);
int vtc_ensure_index(int pvci, char * column, unsigned short *outRc);
int vtc_drop_index(int pvci, char * column, unsigned short *outRc);
int vtc_clear_row(int pvci, int rowIndex, unsigned short *outRc);
int vtc_create_column(int pvci, char * column,unsigned short *outRc);
int vtc_column_size(int pvci, char * column, int *size);
void vtc_free(char * msg);
void vtc_free_list(char * *msglist);
int lrvtc_connect(char * servername, int portnum, int options);
int lrvtc_disconnect();
int lrvtc_query_column(char * columnName, int columnIndex);
int lrvtc_query_row(int columnIndex);
int lrvtc_send_message(char * columnName, char * message);
int lrvtc_send_if_unique(char * columnName, char * message);
int lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
int lrvtc_update_message(char * columnName, int index , char * message);
int lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
int lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
int lrvtc_retrieve_message(char * columnName);
int lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
int lrvtc_retrieve_row();
int lrvtc_increment(char * columnName, int index , int incrValue);
int lrvtc_clear_message(char * columnName, int index);
int lrvtc_clear_column(char * columnName); 
int lrvtc_ensure_index(char * columnName); 
int lrvtc_drop_index(char * columnName); 
int lrvtc_clear_row(int rowIndex);
int lrvtc_create_column(char * columnName);
int lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char *sourceString, char *fromEncoding, char *toEncoding, char *paramName);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 

















# 1 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h"





typedef int PVCI2;
typedef int VTCERR2;

 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(int pvci);
extern VTCERR2  vtc_get_last_error(int pvci);

 
extern VTCERR2  vtc_query_column(int pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(int pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(int pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(int pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(int pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(int pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(int pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(int pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(int pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(int pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(int pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_increment(int pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(int pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(int pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(int pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(int pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(int pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(int pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(int pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(int pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern int     lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern int     lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h" 1























































 




 








 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);










# 716 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


# 729 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



























# 767 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 835 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

 
 
 






# 9 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 2

















 







 














  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2




 
 




# 3 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	
	return 0;
}
# 4 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "ScriptFlow.c" 1
ScriptFlow()
{
	
	lr_save_int(RandomRange(3,10),"LNameLength");

	lr_think_time(5);	
	
	random_alpha("applicantName",atoi(lr_eval_string("{LNameLength}")));
	
	lr_log_message("Applicant Name = %s",lr_eval_string("{applicantName}"));
	
 
	
	lr_think_time(5);

	GenerateUserSSN();
	
	lr_think_time(20);
	
	IntegratedLandingPage();
	
	lr_think_time(20);

	IndividualPage();
	
	lr_think_time(20);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	
	FinancialAssistanceCalculator();
	
	lr_think_time(20);
	
	SelectAccountType();
	
	lr_think_time(20);
	
	SelectUnassisted();
	
	lr_think_time(20);
	
	CreateAccount();
	
	lr_think_time(20);

	AccountMatch();
	
	lr_think_time(20);

	ConsumerRole();
	
	lr_think_time(20);

	SubmitPersonalData();
	
	lr_think_time(20);
	
	IDVerificationQuestions();
	
	lr_think_time(20);

	SubmitChangeReason();
	
	lr_think_time(20);

	GroupSelections();
	
	lr_think_time(20);

	ThankYou();
	
	lr_think_time(20);
	
	CheckOut();
	
	lr_think_time(20);

	web_reg_find("Text=Your enrollment application requires information that needs to be verified", 
		"LAST");

	lr_think_time(20);

	web_link("My Insured Portal", 
		"Text=My Insured Portal", 
		"Snapshot=t80.inf", 
		"LAST");

	lr_think_time(20);
	
	lr_start_transaction("INTEG_UNASSISTED_0021_Logout");
	
	web_submit_data("sign_out", 
		"Action=http://enroll-preprod.dchbx.org/users/sign_out", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/insured/family_members?consumer_role_id={consumer_role_id}", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=_method", "Value=delete", "ENDITEM", 
		"Name=authenticity_token", "Value={authenticity_token_8}", "ENDITEM", 
		"LAST");

	lr_end_transaction("INTEG_UNASSISTED_0021_Logout",2);
	
	lr_think_time(20);
	
	return 0;
}
# 5 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "GenerateUserName.c" 1
GenerateUserName()
{
	
	char c,i;
	char name[32];
	
	name[0]='u';
	name[1]='i';
	name[2]='_';
	
	for (i=3;i<(atoi(lr_eval_string("{nameLength}"))+3);i++) {	
		c = (char) atoi(lr_eval_string("{letterCode}"));
		name[i]=c;
	}
	
	lr_save_string(name, "applicantName");
	
	lr_log_message("User Name = %s",lr_eval_string("{applicantName}"));
	
	return 0;
}

random_alpha(char* param_name, int length) {
	char buff[32] = "";
  int r,i;
  char c;
  srand((unsigned int)_time32(0)*atof(lr_eval_string("VUserID")));  

  for (i = 0; i < length; i++) {
	 
        
	r = rand() % 26 + 97;  
    c = (char)r;
		buff[i] = c;
    printf("%c", c);
  }
	lr_save_string(buff, param_name);
  return 0;
}

RandomRange(int lower,int upper)
{
	return (rand()%(upper-lower+1))+lower;
	
}
# 6 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "GenerateUserSSN.c" 1
GenerateUserSSN()
{
	
	char userSSN[32];
	sprintf(userSSN,"%s-%s-%s",lr_eval_string("{UserSSNFirst3}"),lr_eval_string("{UserSSNSecond2}"),lr_eval_string("{UserSSNLast4}"));
	lr_save_string(userSSN,"applicantSSN");
	
	lr_log_message("User SSN = %s",lr_eval_string("{applicantSSN}"));
	
	return 0;
}
# 7 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "IntegratedLandingPage.c" 1
IntegratedLandingPage()
{
	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_reg_find("Text=Welcome to DC's Health Insurance Marketplace",
	             "LAST");

	lr_start_transaction("INTEG_UNASSISTED_0001_Integrated_Landing_Page");

	web_url("preprod.dchealthlink.com",
	        "URL={IntegratedURL}",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=",
	        "Snapshot=t60.inf",
	        "Mode=HTML",
	        "EXTRARES",
	        "Url=/sites/all/modules/date/date_popup/themes/datepicker.1.7.css?nuobvv", "ENDITEM",
	        "Url=/sites/all/modules/date/date_api/date.css?nuobvv", "ENDITEM",
	        "Url=/sites/all/modules/calendar/css/calendar_multiday.css?nuobvv", "ENDITEM",
	        "Url=/sites/all/modules/fences/field.css?nuobvv", "ENDITEM",
	        "Url=/sites/all/modules/extlink/extlink.css?nuobvv", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/bootstrap-theme.min.css?nuobvv", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/bootstrap.min.css?nuobvv", "ENDITEM",
	        "Url=/sites/all/modules/views/css/views.css?nuobvv", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/bootstrap-theme.xtras.css?nuobvv", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/shared.css?nuobvv", "ENDITEM",
	        "Url=/sites/all/modules/ctools/css/ctools.css?nuobvv", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/home.css?nuobvv", "ENDITEM",
	        "Url=/sites/all/modules/custom/dchl_google_translate/dchl_google_translate.css?nuobvv", "ENDITEM",
	        "Url=/sites/all/themes/dchl/img/stock/home-page-layout.jpg", "Referer={IntegratedURL}sites/all/themes/dchl/css/home.css?nuobvv", "ENDITEM",
	        "Url=/sites/all/modules/extlink/extlink.png", "Referer={IntegratedURL}sites/all/modules/extlink/extlink.css?nuobvv", "ENDITEM",
	        "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0001_Integrated_Landing_Page", 2);

	
	return 0;
}
# 8 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "IndividualPage.c" 1
IndividualPage()
{
	
	web_reg_find("Text=Individual &amp; Family | DC Health Link",
	             "LAST");
	
	lr_start_transaction("INTEG_UNASSISTED_0002_Individual_Page");

	web_link("Individual & Family",
	         "Text=Individual & Family",
	         "Ordinal=1",
	         "Snapshot=t61.inf",
	         "EXTRARES",
	         "Url=/sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/clipboard-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/progress-green-on.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/shop-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/mouse-click-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuobvv", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/person-circle-gray.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuobvv", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/details-md-grey.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuobvv", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/person-gray.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuobvv", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/tax-filings-grey.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuobvv", "ENDITEM",
	         "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0002_Individual_Page", 2);

	
	return 0;
}
# 9 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "PlanComparisonIntro.c" 1
PlanComparisonIntro()
{
		
	web_reg_find("Text=DC Plan Comparison Tool 2016",
	             "LAST");	
	
	lr_start_transaction("INTEG_UNASSISTED_0003_Plan_Comparison_Intro");

	web_link("Continue",
	         "Text=Continue",
	         "Ordinal=1",
	         "Snapshot=t62.inf",
	         "EXTRARES",
	         "Url={CheckbookURL}/{Checkbook_specifics}/assets/img/icons/info-md-blue.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/css/globalV2.css", "ENDITEM",
	         "Url={CheckbookURL}/{Checkbook_specifics}/assets/img/icons/video-md-blue.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/css/globalV2.css", "ENDITEM",
	         "Url={CheckbookURL}/{Checkbook_specifics}/assets/img/icons/plus-md-blue.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/css/globalV2.css", "ENDITEM",
	         "Url={CheckbookURL}/{Checkbook_specifics}/assets/img/icons/flag-lg-yellow.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/css/globalV2.css", "ENDITEM",
	         "Url={CheckbookURL}/{Checkbook_specifics}/assets/img/icons/reload-md-blue.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/css/globalV2.css", "ENDITEM",
	         "Url={CheckbookURL}/{Checkbook_specifics}/assets/img/icons/print-md-blue.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/css/globalV2.css", "ENDITEM",
	         "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0003_Plan_Comparison_Intro", 2);

	
	return 0;
}
# 10 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "PersonalInfoPage.c" 1
PersonalInfoPage()
{
	web_reg_find("Text=DC Plan Comparison Tool 2016 - Tell us about those who will be covered under this insurance", "LAST");

	lr_start_transaction("INTEG_UNASSISTED_0004_Personal_Info_Page");

	web_link("Continue_2",
	         "Text=Continue",
	         "Snapshot=t63.inf",
	         "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0004_Personal_Info_Page", 2);

	
	return 0;
}
# 11 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "DoctorPreferences.c" 1
DoctorPreferences()
{
	
	web_reg_find("Text=DC Plan Comparison Tool 2016 - Doctor Preferences",
	             "LAST");	
	lr_start_transaction("INTEG_UNASSISTED_0005_Doctor_Preferences");

	web_url("doctors.cfm",
	        "URL={CheckbookURL}/{Checkbook_specifics}/doctors.cfm?age=25&healthStatus=&medicalExpense=&pregnant=0&native=0&findSubsidy=no&householdNumber=1&income=&calculateSubsidy=",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer={CheckbookURL}/{Checkbook_specifics}/search.cfm?data=eyJGT1JNVkFMVUVTIjp7fSwiVVJMVkFMVUVTIjp7InN0YXJ0IjoiIn19",
	        "Snapshot=t64.inf",
	        "Mode=HTML",
	        "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0005_Doctor_Preferences", 2);

	
	return 0;
}
# 12 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "PlansList.c" 1
PlansList()
{
	web_reg_find("Text=DC Plan Comparison Tool 2016 - Plans List",
	             "LAST");
	
	 
	web_reg_save_param_regexp(
		"ParamName=First_Plan_Link",
		"RegExp=planName\">(.*?)</a",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/plans.cfm*",
		"LAST");

	lr_start_transaction("INTEG_UNASSISTED_0006_Plans_List");

	web_submit_form("plans.cfm",
	                "Snapshot=t65.inf",
	                "ITEMDATA",
	                "Name=doctorAutoComplete", "Value=", "ENDITEM",
	                "EXTRARES",
	                "Url=assets/js/jquery-ui/images/ui-bg_glass_85_dfeffc_1x400.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/js/jquery-ui/jquery-ui.css", "ENDITEM",
	                "Url=assets/js/jquery-ui/images/ui-bg_inset-hard_100_fcfdfd_1x100.png", "Referer={CheckbookURL}/{Checkbook_specifics}/assets/js/jquery-ui/jquery-ui.css", "ENDITEM",
	                "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0006_Plans_List", 2);

	return 0;
}
# 13 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "PlanDetails.c" 1
PlanDetails()
{
	
	web_reg_find("Text=DC Plan Comparison Tool 2016 - Plan Details",
	             "LAST");
	
	lr_start_transaction("INTEG_UNASSISTED_0007_Plan_Details");

	web_link("BlueChoice HMO Young Adult $6,850",
	         "Text={First_Plan_Link}",
	         "Snapshot=t66.inf",
	         "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0007_Plan_Details", 2);
	
	return 0;
}
# 14 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "EnrollPage.c" 1
EnrollPage()
{

	web_reg_find("Text=DC Plan Comparison Tool 2015 - Enroll",
	             "LAST");	
	
	lr_start_transaction("INTEG_UNASSISTED_0008_Enroll_Page");

	web_url("toEnroll.cfm",
	        "URL={CheckbookURL}/{Checkbook_specifics}/toEnroll.cfm?noLayout&track&planList=86052DC0400004-01&age=25&healthStatus=&medicalExpense=&smoker=&native=0&pregnant=0&county=Washington%20DC&canceledInsurance=&findSubsidy=NO&calculateSubsidy=0&householdNumber=1&income=&sort=2&docIDs=&coverage=&metal=&planType=&carrier=&doctorsFilter=&premiumFilter=&yearlyFilter=&badYearFilter=&deductibleFilter=&qualityFilter=&qm1=&qm2=&qm3=&qm4=&qm5=&qm6=&qm7=&qm8=&qm9=&qm10=&qm11=&qm12=&qm13=&qm14=&qm15=&network=",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer={CheckbookURL}/{Checkbook_specifics}/plan.cfm?data="
	        "eyJGT1JNVkFMVUVTIjp7fSwiVVJMVkFMVUVTIjp7ImNvdmVyYWdlIjoiIiwicGxhbkxpc3QiOiI4NjA1MkRDMDQwMDAwNC0wMSIsInBsYW5UeXBlIjoiIiwiZmluZFN1YnNpZHkiOmZhbHNlLCJkZWR1Y3RpYmxlRmlsdGVyIjoiIiwibmF0aXZlIjowLCJzb3J0IjoyLCJoZWFsdGhTdGF0dXMiOiIiLCJjb3VudHkiOiJXYXNoaW5ndG9uIERDIiwibmV0d29yayI6IiIsImNhcnJpZXIiOiIiLCJkb2NJRHMiOiIiLCJxbTE1IjoiIiwibWVkaWNhbEV4cGVuc2UiOiIiLCJiYWRZZWFyRmlsdGVyIjoiIiwicW00IjoiIiwicW0xMiI6IiIsImNhbmNlbGVkSW5zdXJhbmNlIjoiIiwibWV0YWwiOiIiLCJxbTExIjoiIiwicW01IjoiIiwicW0xNCI6IiIsInFtNiI6IiIsInFtMT"
	        "MiOiIiLCJob3VzZWhvbGROdW1iZXIiOjEsInFtNyI6IiIsInFtOCI6IiIsImFnZSI6MjUsInFtOSI6IiIsInFtMTAiOiIiLCJxdWFsaXR5RmlsdGVyIjoiIiwieWVhcmx5RmlsdGVyIjoiIiwicW0xIjoiIiwiaW5jb21lIjoiIiwicW0yIjoiIiwiY2FsY3VsYXRlU3Vic2lkeSI6MCwicW0zIjoiIiwicHJlbWl1bUZpbHRlciI6IiIsInByZWduYW50IjowLCJkb2N0b3JzRmlsdGVyIjoiIiwic21va2VyIjoiIn19",
	        "Snapshot=t67.inf",
	        "Mode=HTML",
	        "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0008_Enroll_Page", 2);
	
	return 0;
}
# 15 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "ConsumerRoleSearch.c" 1
ConsumerRoleSearch()
{
	
	 
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_2",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/sign_up*",
		"LAST");

	web_reg_find("Text=Create account",
	             "LAST");

	lr_start_transaction("INTEG_UNASSISTED_0009_Consumer_Role_Search");

	web_url("search",
	        "URL={enrollPreprodURL}/insured/consumer_role/search?uqhp=true",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer={CheckbookURL}/{Checkbook_specifics}/plan.cfm?data="
	        "eyJGT1JNVkFMVUVTIjp7fSwiVVJMVkFMVUVTIjp7ImNvdmVyYWdlIjoiIiwicGxhbkxpc3QiOiI4NjA1MkRDMDQwMDAwNC0wMSIsInBsYW5UeXBlIjoiIiwiZmluZFN1YnNpZHkiOmZhbHNlLCJkZWR1Y3RpYmxlRmlsdGVyIjoiIiwibmF0aXZlIjowLCJzb3J0IjoyLCJoZWFsdGhTdGF0dXMiOiIiLCJjb3VudHkiOiJXYXNoaW5ndG9uIERDIiwibmV0d29yayI6IiIsImNhcnJpZXIiOiIiLCJkb2NJRHMiOiIiLCJxbTE1IjoiIiwibWVkaWNhbEV4cGVuc2UiOiIiLCJiYWRZZWFyRmlsdGVyIjoiIiwicW00IjoiIiwicW0xMiI6IiIsImNhbmNlbGVkSW5zdXJhbmNlIjoiIiwibWV0YWwiOiIiLCJxbTExIjoiIiwicW01IjoiIiwicW0xNCI6IiIsInFtNiI6IiIsInFtMT"
	        "MiOiIiLCJob3VzZWhvbGROdW1iZXIiOjEsInFtNyI6IiIsInFtOCI6IiIsImFnZSI6MjUsInFtOSI6IiIsInFtMTAiOiIiLCJxdWFsaXR5RmlsdGVyIjoiIiwieWVhcmx5RmlsdGVyIjoiIiwicW0xIjoiIiwiaW5jb21lIjoiIiwicW0yIjoiIiwiY2FsY3VsYXRlU3Vic2lkeSI6MCwicW0zIjoiIiwicHJlbWl1bUZpbHRlciI6IiIsInByZWduYW50IjowLCJkb2N0b3JzRmlsdGVyIjoiIiwic21va2VyIjoiIn19",
	        "Snapshot=t68.inf",
	        "Mode=HTML",
	        "EXTRARES",
	        "Url=/assets/AvenirLTStd-Light-4e4abaf53447b1cf2cc9e0fb49a3e1ea.woff", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "Url=http://js-agent.newrelic.com/nr-741.min.js", "Referer={enrollPreprodURL}/users/sign_up", "ENDITEM",
	        "Url=http://bam.nr-data.net/1/7b24c5470b?a=8419503&pl=1442587829472&v=741.f816aee&to=IQ5cQhNfVQoAFkpFRAcTQRkTVV4PFhAXUUMLDlxFTl5cEQ%3D%3D&ap=9&be=1351&fe=6247&dc=807&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1442587829472,%22n%22:0,%22dl%22:1341,%22di%22:2147,%22ds%22:2165,%22de%22:2188,%22dc%22:7604,%22l%22:7604,%22le%22:7606,%22r%22:0,%22re%22:1269,%22f%22:1269,%22dn%22:1270,%22dne%22:1270,%22c%22:1270,%22ce%22:1270,%22rq%22:1299,%22rp%22:1341,%22rpe%22:1356%7D,%22navigation%22:%7B%22rc%22"
	        ":1%7D%7D&jsonp=NREUM.setToken", "Referer={enrollPreprodURL}/users/sign_up", "ENDITEM",
	        "Url=/assets/fontawesome-webfont-a21d40494ad61b33a05df3c78a7a276c.woff2?v=4.4.0", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "Url=/assets/icons/check_radio_sheet-9de6b3ff89e891cb43ecc05a8dc84515.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "Url=/assets/jquery-ui/ui-bg_flat_75_ffffff_40x100-66b22589d0fc959b460476ea579ea2c5.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "Url=/assets/jquery-ui/ui-bg_highlight-soft_75_cccccc_1x100-cfa0baa2d39d4ddef2fd98d7f6685c0f.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "Url=/assets/jquery-ui/ui-icons_222222_256x240-cbcd12c8048035bf8dae817212e922da.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "Url=/assets/jquery-ui/ui-bg_glass_75_e6e6e6_1x400-78b60ab54d71e2185242c1c59123ddec.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "Url=/assets/jquery-ui/ui-bg_glass_55_fbf9ee_1x400-cd0eb7b399bba6ce203b35e4b98bd965.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "Url=/assets/jquery-ui/ui-bg_glass_75_dadada_1x400-65c6a21b08a8c1151b2bbfbd64269d49.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "Url=/assets/glyphicons-halflings-regular-c575a06b0f5e17a30eccb36f64777cc3.woff2", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "Url=/assets/avenirltstd-black-30537c01d25f7c6edc1d149513dd3116.woff", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "Url=/assets/icons/bronze-circle-01104c3991c066061e2562e16b743243.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "Url=/assets/icons/silver-circle-215097bc30260c2d100146c2a2cf5917.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "Url=/assets/icons/gold-circle-9c65653709ef747c464dc5ef45320613.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "Url=/assets/icons/platinum-circle-413483a54b3f43af9fa1f2e6beedecb8.png", "Referer={enrollPreprodURL}/assets/application-ded4c1217f89b41785bf77186d1c101d.css", "ENDITEM",
	        "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0009_Consumer_Role_Search", 2);

	return 0;
}
# 16 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "CreateAccount.c" 1
CreateAccount()
{

	web_reg_find("Text=Welcome! Your account has been created",
	             "LAST");
	
	lr_start_transaction("INTEG_UNASSISTED_0010_Create_Account");

	web_submit_data("users",
	                "Action={enrollPreprodURL}/users",
	                "Method=POST",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/users/sign_up",
	                "Snapshot=t69.inf",
	                "Mode=HTML",
	                "EncodeAtSign=YES",
	                "ITEMDATA",
	                "Name=utf8", "Value=✓", "ENDITEM",
	                "Name=authenticity_token", "Value={authenticity_token_2}", "ENDITEM",
	                "Name=user[referer]", "Value={CheckbookURL}/{Checkbook_specifics}/plan.cfm?data="
	                "eyJGT1JNVkFMVUVTIjp7fSwiVVJMVkFMVUVTIjp7ImNvdmVyYWdlIjoiIiwicGxhbkxpc3QiOiI4NjA1MkRDMDQwMDAwNC0wMSIsInBsYW5UeXBlIjoiIiwiZmluZFN1YnNpZHkiOmZhbHNlLCJkZWR1Y3RpYmxlRmlsdGVyIjoiIiwibmF0aXZlIjowLCJzb3J0IjoyLCJoZWFsdGhTdGF0dXMiOiIiLCJjb3VudHkiOiJXYXNoaW5ndG9uIERDIiwibmV0d29yayI6IiIsImNhcnJpZXIiOiIiLCJkb2NJRHMiOiIiLCJxbTE1IjoiIiwibWVkaWNhbEV4cGVuc2UiOiIiLCJiYWRZZWFyRmlsdGVyIjoiIiwicW00IjoiIiwicW0xMiI6IiIsImNhbmNlbGVkSW5zdXJhbmNlIjoiIiwibWV0YWwiOiIiLCJxbTExIjoiIiwicW01IjoiIiwicW0xNCI6IiIsInFtNiI6IiIsInFtMT"
	                "MiOiIiLCJob3VzZWhvbGROdW1iZXIiOjEsInFtNyI6IiIsInFtOCI6IiIsImFnZSI6MjUsInFtOSI6IiIsInFtMTAiOiIiLCJxdWFsaXR5RmlsdGVyIjoiIiwieWVhcmx5RmlsdGVyIjoiIiwicW0xIjoiIiwiaW5jb21lIjoiIiwicW0yIjoiIiwiY2FsY3VsYXRlU3Vic2lkeSI6MCwicW0zIjoiIiwicHJlbWl1bUZpbHRlciI6IiIsInByZWduYW50IjowLCJkb2N0b3JzRmlsdGVyIjoiIiwic21va2VyIjoiIn19", "ENDITEM",
	                "Name=user[email]", "Value={applicantName}@mailinator.com", "ENDITEM",
	                "Name=user[password]", "Value=Abcd!234", "ENDITEM",
	                "Name=user[password_confirmation]", "Value=Abcd!234", "ENDITEM",
	                "Name=user[invitation_id]", "Value=", "ENDITEM",
	                "Name=commit", "Value=Create account", "ENDITEM",
	                "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0010_Create_Account", 2);

	
	return 0;
}
# 17 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "AccountMatch.c" 1
AccountMatch()
{
	web_reg_find("Text=Now let's see if you and your family are eligible to enroll in coverage on DC Health Link", 
	             "SAVECOUNT=AccountMatch",
	             	"LAST");
	
	web_reg_find("Text=The Curam account lookup service is currently unavailable", 
	             "SAVECOUNT=CuramUnavailable",
	             	"LAST");

	 
	web_reg_save_param_regexp(
		"ParamName=authenticity_token",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/match*",
		"LAST");

	 
	web_reg_save_param_regexp(
		"ParamName=UserID",
		"RegExp=person%5Buser_id%5D=(.*?)\">Continue",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/match*",
		"LAST");
	
	lr_start_transaction("INTEG_UNASSISTED_0011_Account_Match");
	
	web_url("match",
	        "URL={enrollPreprodURL}/insured/consumer_role/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=Test&person%5Bmiddle_name%5D=L&person%5Blast_name%5D={applicantName}&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D={applicantSSN}&person%5Bno_ssn%5D=0&person%5Bgender%5D=male",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer={enrollPreprodURL}/insured/consumer_role/search?uqhp=true",
	        "Snapshot=t70.inf",
	        "Mode=HTML",
	        "LAST");

	if (strcmp(lr_eval_string("{CuramUnavailable}"), "0") > 0)
	{
			lr_end_transaction("INTEG_UNASSISTED_0011_Account_Match",1);
			lr_error_message("Curam Service Unavailable for User %s", lr_eval_string("{applicantName}"));
			lr_exit(2, 2);
	}
	else if (strcmp(lr_eval_string("{AccountMatch}"), "0") > 0)
	{
			lr_end_transaction("INTEG_UNASSISTED_0011_Account_Match",0);
	}
	else
	{
			lr_end_transaction("INTEG_UNASSISTED_0011_Account_Match",1);
			lr_error_message("Failed to get Fantastic msg for User %s", lr_eval_string("{applicantName}"));
			lr_exit(2, 2);
	}
	
	
 

	
	return 0;
}
# 18 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "ConsumerRole.c" 1
ConsumerRole()
{
	
	web_reg_find("Text=let's get you signed up for healthcare",
	             "SAVECOUNT=ConsumerMatch",
	             	"LAST");
	
	 
	web_reg_save_param_regexp(
		"ParamName=consumer_role_id",
		"RegExp=consumer_role/(.*?)/",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/consumer_role*",
		"LAST");
	
	 
	web_reg_save_param_regexp(
		"ParamName=person_id",
		"RegExp=edit_person_(.*?)\"\\ enctype",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/edit*",
		"LAST");
	
	 
	web_reg_save_param_regexp("ParamName=NaturalizationCertElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		"SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*","LAST");
	
	 
	web_reg_save_param_regexp("ParamName=CertOfCitizentshipElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		"SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*","LAST");
	
	 
	web_reg_save_param_regexp("ParamName=ReentryPermitElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		"SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*","LAST");	

	 
	web_reg_save_param_regexp("ParamName=PermanentResidentCardElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		"SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*","LAST");		

	 
	web_reg_save_param_regexp("ParamName=RefugeeTravelDocumentElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		"SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*","LAST");
	
	 
	web_reg_save_param_regexp("ParamName=ArrivalDepartureRecordElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		"SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*","LAST");	

	 
	web_reg_save_param_regexp("ParamName=ForeignPassportArrivalDepartureRecordElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		"SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*","LAST");

	 
	web_reg_save_param_regexp("ParamName=ImmigrantVisaElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		"SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*","LAST");	

	 
	web_reg_save_param_regexp("ParamName=TemporaryI-551StampElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		"SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*","LAST");

	 
	web_reg_save_param_regexp("ParamName=CertOfEligibilityForNonimmigrantElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		"SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*","LAST");
	
	 
	web_reg_save_param_regexp("ParamName=OtherWithAlienNumberElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		"SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*","LAST");

	 
	web_reg_save_param_regexp("ParamName=UnexpiredForeignPassportElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		"SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*","LAST");

	 
	web_reg_save_param_regexp("ParamName=DS2019ElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		"SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*","LAST");
	
	 
	web_reg_save_param_regexp("ParamName=emailAddressElementID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=4",
		"SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*", "LAST");
	
	lr_start_transaction("INTEG_UNASSISTED_0012_Consumer_Role");	
	
	web_submit_data("consumer_role",
	                "Action={enrollPreprodURL}/insured/consumer_role?person%5Bdob%5D=1978-01-01&person%5Bfirst_name%5D=Test&person%5Bgender%5D=male&person%5Blast_name%5D={applicantName}&person%5Bmiddle_name%5D=L&person%5Bname_sfx%5D=&person%5Bno_ssn%5D=0&person%5Bssn%5D={applicantSSN}&person%5Buser_id%5D={UserID}",
	                "Method=POST",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/insured/consumer_role/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=Test&person%5Bmiddle_name%5D=L&person%5Blast_name%5D={applicantName}Test&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D={applicantSSN}&person%5Bno_ssn%5D=0&person%5Bgender%5D=male",
	                "Snapshot=t71.inf",
	                "Mode=HTML",
	                "ITEMDATA",
	                "Name=_method", "Value=post", "ENDITEM",
	                "Name=authenticity_token", "Value={authenticity_token}", "ENDITEM",
		          "LAST");
	
	if (strcmp(lr_eval_string("{ConsumerMatch}"), "0") > 0)
	{
			lr_end_transaction("INTEG_UNASSISTED_0012_Consumer_Role",0);
	}
	else
	{
			lr_end_transaction("INTEG_UNASSISTED_0012_Consumer_Role",1);
			lr_error_message("Failed to get Consumer Role msg for User %s", lr_eval_string("{applicantName}"));
			lr_exit(2, 2);
	}
 
	
	return 0;

}
# 19 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "SubmitPersonalData.c" 1
SubmitPersonalData()
{
	
	web_reg_find("Text=Consent",
	             "LAST");
	
	lr_start_transaction("INTEG_UNASSISTED_0013_Submit_Personal_Data");

	web_submit_data(lr_eval_string("{consumer_role_id}"),
	                "Action={enrollPreprodURL}/insured/consumer_role/{consumer_role_id}",
	                "Method=POST",
	                "EncType=multipart/form-data",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/insured/consumer_role/{consumer_role_id}/edit",
	                "Snapshot=t72.inf",
	                "Mode=HTML",
	                "ITEMDATA",
	                "Name=utf8", "Value=✓", "ENDITEM",
	                "Name=_method", "Value=put", "ENDITEM",
	                "Name=authenticity_token", "Value={authenticity_token}", "ENDITEM",
	                "Name=exit_after_method", "Value=false", "ENDITEM",
	                "Name=people[id]", "Value=", "ENDITEM",
	                "Name=person[first_name]", "Value=Test", "ENDITEM",
	                "Name=person[middle_name]", "Value=L", "ENDITEM",
	                "Name=person[last_name]", "Value={applicantName}", "ENDITEM",
	                "Name=person[name_sfx]", "Value=", "ENDITEM",
	                "Name=person[dob]", "Value=1978-01-01", "ENDITEM",
	                "Name=jq_datepicker_ignore_person[dob]", "Value=01/01/1978", "ENDITEM",
	                "Name=person[ssn]", "Value={applicantSSN}", "ENDITEM",
	                "Name=person[no_ssn]", "Value=0", "ENDITEM",
	                "Name=person[gender]", "Value=male", "ENDITEM",
	                "Name=person[us_citizen]", "Value=true", "ENDITEM",
	                "Name=person[naturalized_citizen]", "Value=false", "ENDITEM",
	                "Name=immigration_doc_type", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][subject]", "Value=Naturalization Certificate", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][id]", "Value={NaturalizationCertElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][naturalization_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][alien_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][subject]", "Value=Certificate of Citizenship", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][id]", "Value={CertOfCitizentshipElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][passport_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][alien_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][2][subject]", "Value=I-327 (Reentry Permit)", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][2][id]", "Value={ReentryPermitElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][2][alien_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][3][subject]", "Value=I-551 (Permanent Resident Card)", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][3][id]", "Value={PermanentResidentCardElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][3][card_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][3][alien_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][4][subject]", "Value=I-571 (Refugee Travel Document)", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][4][id]", "Value={RefugeeTravelDocumentElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][4][alien_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][5][subject]", "Value=I-94 (Arrival/Departure Record)", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][5][id]", "Value={ArrivalDepartureRecordElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][5][i94_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][6][subject]", "Value=I-94 (Arrival/Departure Record) in Unexpired Foreign Passport", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][6][id]", "Value={ForeignPassportArrivalDepartureRecordElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][6][i94_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][6][passport_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][7][subject]", "Value=Machine Readable Immigrant Visa (with Temporary I-551 Language)", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][7][id]", "Value={ImmigrantVisaElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][7][alien_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][8][subject]", "Value=I-571 (Refugee Travel Document)", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][8][id]", "Value={RefugeeTravelDocumentElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][8][alien_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][9][subject]", "Value=Temporary I-551 Stamp (on passport or I-94)", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][9][id]", "Value={TemporaryI-551StampElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][9][alien_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][10][subject]", "Value=I-20 (Certificate of Eligibility for Nonimmigrant (F-1) Student Status)", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][10][id]", "Value={CertOfEligibilityForNonimmigrantElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][10][sevis_id]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][11][subject]", "Value=I-94 (Arrival/Departure Record) in Unexpired Foreign Passport", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][11][id]", "Value={ForeignPassportArrivalDepartureRecordElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][11][i94_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][11][passport_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][12][subject]", "Value=Other (With Alien Number)", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][12][id]", "Value={OtherWithAlienNumberElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][12][alien_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][12][description]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][13][subject]", "Value=Other (With Alien Number)", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][13][id]", "Value={OtherWithAlienNumberElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][13][i94_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][13][description]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][14][subject]", "Value=I-571 (Refugee Travel Document)", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][14][id]", "Value={RefugeeTravelDocumentElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][14][alien_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][15][subject]", "Value=Unexpired Foreign Passport", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][15][id]", "Value={UnexpiredForeignPassportElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][15][passport_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][16][subject]", "Value=DS2019 (Certificate of Eligibility for Exchange Visitor (J-1) Status)", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][16][id]", "Value={DS2019ElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][16][sevis_id]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][id]", "Value={consumer_role_id}", "ENDITEM",
	                "Name=form_for_consumer_role", "Value=true", "ENDITEM",
	                "Name=naturalization_doc_type", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][subject]", "Value=Naturalization Certificate", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][id]", "Value={NaturalizationCertElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][naturalization_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][0][alien_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][subject]", "Value=Certificate of Citizenship", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][id]", "Value={CertOfCitizentshipElementID}", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][passport_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][vlp_documents_attributes][1][alien_number]", "Value=", "ENDITEM",
	                "Name=person[consumer_role_attributes][id]", "Value={consumer_role_id}", "ENDITEM",
	                "Name=person[indian_tribe_member]", "Value=0", "ENDITEM",
	                "Name=person[tribal_id]", "Value=", "ENDITEM",
	                "Name=person[is_incarcerated]", "Value=0", "ENDITEM",
	                "Name=person[ethnicity][]", "Value=", "ENDITEM",
	                "Name=person[ethnicity][]", "Value=", "ENDITEM",
	                "Name=person[ethnicity][]", "Value=", "ENDITEM",
	                "Name=person[ethnicity][]", "Value=", "ENDITEM",
	                "Name=person[ethnicity][]", "Value=", "ENDITEM",
	                "Name=person[ethnicity][]", "Value=", "ENDITEM",
	                "Name=person[ethnicity][]", "Value=", "ENDITEM",
	                "Name=person[is_consumer_role]", "Value=true", "ENDITEM",
	                "Name=person[no_dc_address]", "Value=0", "ENDITEM",
	                "Name=person[addresses_attributes][0][kind]", "Value=home", "ENDITEM",
	                "Name=person[addresses_attributes][0][address_1]", "Value=609 H St", "ENDITEM",
	                "Name=person[addresses_attributes][0][address_2]", "Value=", "ENDITEM",
	                "Name=person[addresses_attributes][0][city]", "Value=Washington", "ENDITEM",
	                "Name=person[addresses_attributes][0][state]", "Value=DC", "ENDITEM",
	                "Name=person[addresses_attributes][0][zip]", "Value=20002", "ENDITEM",
	                "Name=person[addresses_attributes][1][kind]", "Value=work", "ENDITEM",
	                "Name=person[addresses_attributes][1][address_1]", "Value=", "ENDITEM",
	                "Name=person[addresses_attributes][1][address_2]", "Value=", "ENDITEM",
	                "Name=person[addresses_attributes][1][city]", "Value=", "ENDITEM",
	                "Name=person[addresses_attributes][1][state]", "Value=", "ENDITEM",
	                "Name=person[addresses_attributes][1][zip]", "Value=", "ENDITEM",
	                "Name=person[addresses_attributes][2][kind]", "Value=mailing", "ENDITEM",
	                "Name=person[addresses_attributes][2][address_1]", "Value=", "ENDITEM",
	                "Name=person[addresses_attributes][2][address_2]", "Value=", "ENDITEM",
	                "Name=person[addresses_attributes][2][city]", "Value=", "ENDITEM",
	                "Name=person[addresses_attributes][2][state]", "Value=", "ENDITEM",
	                "Name=person[addresses_attributes][2][zip]", "Value=", "ENDITEM",
	                "Name=person[phones_attributes][0][kind]", "Value=home", "ENDITEM",
	                "Name=person[phones_attributes][0][full_phone_number]", "Value=(202) 555-5555", "ENDITEM",
	                "Name=person[phones_attributes][1][kind]", "Value=mobile", "ENDITEM",
	                "Name=person[phones_attributes][1][full_phone_number]", "Value=", "ENDITEM",
	                "Name=person[emails_attributes][0][kind]", "Value=home", "ENDITEM",
	                "Name=person[emails_attributes][0][address]", "Value={applicantName}@mailinator.com", "ENDITEM",
	                "Name=person[emails_attributes][0][id]", "Value={emailAddressElementID}", "ENDITEM",
	                "Name=person[emails_attributes][1][kind]", "Value=work", "ENDITEM",
	                "Name=person[emails_attributes][1][address]", "Value=", "ENDITEM",
		           "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0013_Submit_Personal_Data", 2);

	return 0;
}
# 20 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "IDVerificationQuestions.c" 1
IDVerificationQuestions()
{
	
	web_reg_find("Text/IC=content interactive_identity_verifications","LAST");

	 
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_1",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");
	
	 
	web_reg_save_param_regexp(
		"ParamName=session_id",
		"RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name",
		"Ordinal=2",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");
	
	 
	web_reg_save_param_regexp(
		"ParamName=transaction_id",
		"RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name",
		"Ordinal=3",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");
	
	lr_start_transaction("INTEG_UNASSISTED_0014_Choose_Family_Members");

	web_link("Continue_3",
	         "Text=Continue",
	         "Snapshot=t73.inf",
	         "LAST");
	
	lr_end_transaction("INTEG_UNASSISTED_0014_Choose_Family_Members", 2);
	
	lr_think_time(20);
	
	web_reg_find("Text=Family Members",
	             "LAST");

	lr_start_transaction("INTEG_UNASSISTED_0015_ID_Verification_Questions");	
	
	web_submit_data("interactive_identity_verifications",
	                "Action={enrollPreprodURL}/insured/interactive_identity_verifications",
	                "Method=POST",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/insured/interactive_identity_verifications/new",
	                "Snapshot=t74.inf",
	                "Mode=HTML",
	                "ITEMDATA",
	                "Name=utf8", "Value=✓", "ENDITEM",
	                "Name=authenticity_token", "Value={authenticity_token_1}", "ENDITEM",
	                "Name=interactive_verification[session_id]", "Value={session_id}", "ENDITEM",
	                "Name=interactive_verification[transaction_id]", "Value={transaction_id}", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][0][question_id]", "Value=1", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][0][question_text]", "Value=You currently or previously resided on one of the following streets. Please select the street name from the following choices.", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][0][response_id]", "Value=1", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][0][response_text]", "Value=AUGUSTA", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][1][response_id]", "Value=2", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][1][response_text]", "Value=FALMOUTH HEIGHTS", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][2][response_id]", "Value=3", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][2][response_text]", "Value=GOETHALS", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][3][response_id]", "Value=4", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][3][response_text]", "Value=HARRISON", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][4][response_id]", "Value=5", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][0][responses_attributes][4][response_text]", "Value=NONE OF THE ABOVE", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][0][response_id]", "Value=5", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][1][question_id]", "Value=2", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][1][question_text]", "Value=Please select the range that includes the year the home was built for the address that you provided.", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][0][response_id]", "Value=1", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][0][response_text]", "Value=1965 to 1974", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][1][response_id]", "Value=2", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][1][response_text]", "Value=1975 to 1984", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][2][response_id]", "Value=3", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][2][response_text]", "Value=1985 to 1994", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][3][response_id]", "Value=4", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][3][response_text]", "Value=1995 to 2004", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][4][response_id]", "Value=5", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][1][responses_attributes][4][response_text]", "Value=NONE OF THE ABOVE", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][1][response_id]", "Value=5", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][2][question_id]", "Value=3", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][2][question_text]", "Value=Which of the following is the highest level of education you have completed?  If there is not a matched educational level, please select 'NONE OF THE ABOVE'.", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][0][response_id]", "Value=1", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][0][response_text]", "Value=HIGH SCHOOL DIPLOMA", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][1][response_id]", "Value=2", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][1][response_text]", "Value=SOME COLLEGE", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][2][response_id]", "Value=3", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][2][response_text]", "Value=BACHELOR DEGREE", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][3][response_id]", "Value=4", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][3][response_text]", "Value=GRADUATE DEGREE", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][4][response_id]", "Value=5", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][2][responses_attributes][4][response_text]", "Value=NONE OF THE ABOVE", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][2][response_id]", "Value=5", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][3][question_id]", "Value=4", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][3][question_text]", "Value=Please select the number of bedrooms in your home from the\r\n                                following choices. If the number of bedrooms in your home is not one\r\n                                of the choices please select 'NONE OF THE ABOVE'.", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][0][response_id]", "Value=1", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][0][response_text]", "Value=2", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][1][response_id]", "Value=2", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][1][response_text]", "Value=3", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][2][response_id]", "Value=3", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][2][response_text]", "Value=4", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][3][response_id]", "Value=4", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][3][response_text]", "Value=5", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][4][response_id]", "Value=5", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][3][responses_attributes][4][response_text]", "Value=NONE OF THE ABOVE", "ENDITEM",
	                "Name=interactive_verification[questions_attributes][3][response_id]", "Value=5", "ENDITEM",
	                "Name=commit", "Value=Submit", "ENDITEM",
	                "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0015_ID_Verification_Questions", 2);

	
	return 0;
}
# 21 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "SubmitChangeReason.c" 1
SubmitChangeReason()
{
	 
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_4",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");
	
	web_reg_find("Text=Special Enrollment Period","LAST");
	
	lr_start_transaction("INTEG_UNASSISTED_0016_ID_Submit_Covered_Family_Members");

	web_link("Continue_4",
	         "Text=Continue",
	         "Snapshot=t75.inf",
	         "EXTRARES",
	         "Url=check_qle_date.js?date_val=09%2F01%2F2015&qle_type=I%27m+losing+other+health+insuranceI%27m+losing+other+health+insurance&qle_id={qle_id}", "ENDITEM",
	         "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0016_ID_Submit_Covered_Family_Members", 2);
	
	lr_think_time(20);
	
	 
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_5",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");
	
	 
	web_reg_save_param_regexp(
		"ParamName=family_id",
		"RegExp=id=\"family_member_ids_0\"\\ value=\"(.*?)\"\\ onclick",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/new*",
		"LAST");
	
	web_reg_find("Text/IC=Covered Family Members",
	             "LAST");

	lr_start_transaction("INTEG_UNASSISTED_0017_ID_Submit_Change_Reason");	
	
	web_submit_data("record_sep",
	                "Action={enrollPreprodURL}/insured/families/record_sep",
	                "Method=POST",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/insured/families/find_sep",
	                "Snapshot=t76.inf",
	                "Mode=HTML",
	                "ITEMDATA",
	                "Name=utf8", "Value=✓", "ENDITEM",
	                "Name=authenticity_token", "Value={authenticity_token_4}", "ENDITEM",
	                "Name=qle_date", "Value={qle_date}", "ENDITEM",
	                "Name=change_plan", "Value={qle_text}", "ENDITEM",
	                "Name=qle_id", "Value={qle_id}", "ENDITEM",
	                "Name=employee_role_id", "Value=None", "ENDITEM",
	                "Name=effective_on_kind", "Value=first_of_month", "ENDITEM",
	                "Name=commit", "Value=Continue", "ENDITEM",
	                "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0017_ID_Submit_Change_Reason", 2);
	
	return 0;
}
# 22 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "GroupSelections.c" 1
GroupSelections()
{
	 
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_6",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");
	
	 
	web_reg_save_param_regexp(
		"ParamName=plan_shoppings",
		"RegExp=plan_shoppings/(.*?)\\?coverage_kind",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/group_selections*",
		"LAST");

	web_reg_find("Text=Choose a healthcare plan","LAST");
	
	lr_start_transaction("INTEG_UNASSISTED_0018_ID_Group_Selections");

	web_submit_data("group_selections",
	                "Action={enrollPreprodURL}/insured/group_selections",
	                "Method=POST",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/insured/group_selections/new?consumer_role_id={consumer_role_id}&enrollment_kind=sep&person_id={person_id}",
	                "Snapshot=t77.inf",
	                "Mode=HTML",
	                "ITEMDATA",
	                "Name=utf8", "Value=✓", "ENDITEM",
	                "Name=authenticity_token", "Value={authenticity_token_5}", "ENDITEM",
	                "Name=person_id", "Value={person_id}", "ENDITEM",
	                "Name=employee_role_id", "Value=", "ENDITEM",
	                "Name=coverage_household_id", "Value=", "ENDITEM",
	                "Name=enrollment_kind", "Value=sep", "ENDITEM",
	                "Name=family_member_ids[0]", "Value={family_id}", "ENDITEM",
	                "Name=coverage_kind", "Value=health", "ENDITEM",
	                "Name=market_kind", "Value=individual", "ENDITEM",
	                "EXTRARES",
	                "Url=http://bam.nr-data.net/1/7b24c5470b?a=8419503&pl=1442588106003&v=741.f816aee&to=IQ5cQhNfVQoAFkpZWREUQFMFH0kKBAo6Q18NEUJfD1dKSRYMCkc%3D&ap=168&be=600&fe=18768&dc=4197&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1442588106003,%22n%22:0,%22dl%22:597,%22di%22:4819,%22ds%22:4820,%22de%22:4890,%22dc%22:19391,%22l%22:19391,%22le%22:19396,%22r%22:0,%22re%22:260,%22f%22:261,%22dn%22:262,%22dne%22:263,%22c%22:263,%22ce%22:263,%22rq%22:350,%22rp%22:597,%22rpe%22:597%7D,%22navigation%22:%7B%22rc%22:1%7D%7D&"
	                "jsonp=NREUM.setToken", "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=sep&market_kind=individual", "ENDITEM",
	                "Url=plan_shoppings/{plan_shoppings}/plans?change_plan=&amp;coverage_kind=health&amp;enrollment_kind=sep&amp;market_kind=individual", "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=sep&market_kind=individual", "ENDITEM",
	                "Url=../assets/logo/carrier/carefirst-dadfc5ebd8daceb4a814547e493b2de5.jpg", "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=sep&market_kind=individual", "ENDITEM",
	                "Url=../assets/logo/carrier/kaiser-ed237f9064fd82d21a51b73ca5fd07a2.jpg", "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=sep&market_kind=individual", "ENDITEM",
	                "Url=../assets/logo/carrier/aetna-f66e80a27c63101284b712ef5337b1eb.jpg", "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=sep&market_kind=individual", "ENDITEM",
	                "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0018_ID_Group_Selections", 2);

	return 0;
}
# 23 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "ThankYou.c" 1
ThankYou()
{
	
	 
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_7",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_reg_find("Text=Confirm Your Plan Selection","LAST");

	lr_think_time(9);
	
	lr_start_transaction("INTEG_UNASSISTED_0019_Thank_You");

	web_submit_data("thankyou",
	                "Action={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}/thankyou?change_plan=&coverage_kind=health&enrollment_kind=sep&market_kind=individual&plan_id={plan_id}",
	                "Method=POST",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=sep&market_kind=individual",
	                "Snapshot=t78.inf",
	                "Mode=HTML",
	                "ITEMDATA",
	                "Name=_method", "Value=post", "ENDITEM",
	                "Name=authenticity_token", "Value={authenticity_token_6}", "ENDITEM",
	                "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0019_Thank_You", 2);

	
	return 0;
}
# 24 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "CheckOut.c" 1
CheckOut()
{
	web_reg_find("Text/IC=Purchase confirmation","LAST");
	
	 
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_8",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	lr_start_transaction("INTEG_UNASSISTED_0020_Check_Out");

	web_submit_data("checkout",
	                "Action={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}/checkout?coverage_kind=health&enrollment_kind=sep&market_kind=individual&plan_id={plan_id}",
	                "Method=POST",
	                "RecContentType=text/html",
	                "Referer={enrollPreprodURL}/insured/plan_shoppings/{plan_shoppings}/thankyou?change_plan=&coverage_kind=health&enrollment_kind=sep&market_kind=individual&plan_id={plan_id}",
	                "Snapshot=t79.inf",
	                "Mode=HTML",
	                "ITEMDATA",
	                "Name=_method", "Value=post", "ENDITEM",
	                "Name=authenticity_token", "Value={authenticity_token_7}", "ENDITEM",
	                "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0020_Check_Out", 2);
	
	return 0;
}
# 25 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "FinancialAssistanceCalculator.c" 1
FinancialAssistanceCalculator()
{
	lr_start_transaction("INTEG_UNASSISTED_0003_Financial_Assistance_Calculator");

	web_reg_find("Text=DC Plan Comparison Tool 2016",
	             "LAST");

	web_link("Financial Assistance Calculator",
	         "Text=Financial Assistance Calculator",
	         "Ordinal=1",
	         "Snapshot=t3.inf",
	         "EXTRARES",
	         "Url=http://dc.checkbookhealth.org/hie/dc/2016/assets/img/icons/info-md-blue.png", "Referer=http://dc.checkbookhealth.org/hie/dc/2016/assets/css/globalV2.css", "ENDITEM",
	         "Url=http://dc.checkbookhealth.org/hie/dc/2016/assets/img/icons/video-md-blue.png", "Referer=http://dc.checkbookhealth.org/hie/dc/2016/assets/css/globalV2.css", "ENDITEM",
	         "Url=http://dc.checkbookhealth.org/hie/dc/2016/assets/img/icons/reload-md-blue.png", "Referer=http://dc.checkbookhealth.org/hie/dc/2016/assets/css/globalV2.css", "ENDITEM",
	         "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0003_Financial_Assistance_Calculator", 2);

	
	return 0;
}
# 26 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "SelectAccountType.c" 1
SelectAccountType()
{
	
	lr_start_transaction("INTEG_UNASSISTED_0004_Integrated_Create_Account");

	web_reg_find("Text/IC=What Type of Account Do You Need",
	             "LAST");

	web_link("Create Account",
	         "Text=Create Account",
	         "Ordinal=1",
	         "Snapshot=t4.inf",
	         "EXTRARES",
	         "Url=/sites/all/themes/dchl/css/create-account.css?nuuek7", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/arrow-right-sm-blue.png", "Referer={IntegratedURL}/sites/all/themes/dchl/css/shared.css?nuuek7", "ENDITEM",
	         "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0004_Integrated_Create_Account", 2);

	
	return 0;
}
# 27 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "SelectUnassisted.c" 1
SelectUnassisted()
{
	
	 
	web_reg_save_param_regexp(
		"ParamName=authenticity_token_2",
		"RegExp=\\ content=\"(.*?)\"\\ ",
		"Ordinal=2",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/sign_up*",
		"LAST");
	
	web_reg_find("Text/IC=Create account",
	             "LAST");

	lr_start_transaction("INTEG_UNASSISTED_0005_Select_Unassisted");

	web_url("unassisted",
	        "URL={IntegratedURL}/create-account/unassisted",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=",
	        "Snapshot=t5.inf",
	        "Mode=HTML",
	        "EXTRARES",
	        "Url=http://enroll-preprod.dchbx.org/assets/AvenirLTStd-Light-4e4abaf53447b1cf2cc9e0fb49a3e1ea.woff", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "Url=http://js-agent.newrelic.com/nr-686.min.js", "Referer=http://enroll-preprod.dchbx.org/users/sign_up", "ENDITEM",
	        "Url=http://bam.nr-data.net/1/7b24c5470b?a=8419501&pl=1443109422922&v=686.b365e66&to=IQ5cQhNfVQoAFkpFRAcTQRkTVV4PFhAXUUMLDlxFTl5cEQ%3D%3D&ap=11&be=3583&fe=8319&dc=1206&f=%5B%5D&perf=%7B%22timing%22:%7B%22of%22:1443109422922,%22n%22:0,%22dl%22:3556,%22di%22:4763,%22ds%22:4787,%22de%22:4817,%22dc%22:11900,%22l%22:11900,%22le%22:11901,%22f%22:3468,%22dn%22:3468,%22dne%22:3468,%22c%22:3468,%22ce%22:3468,%22rq%22:3496,%22rp%22:3556,%22rpe%22:3579%7D,%22navigation%22:%7B%7D%7D&jsonp=NREUM.setToken", "Refe"
	        "rer=http://enroll-preprod.dchbx.org/users/sign_up", "ENDITEM",
	        "Url=http://enroll-preprod.dchbx.org/assets/fontawesome-webfont-a21d40494ad61b33a05df3c78a7a276c.woff2?v=4.4.0", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "Url=http://enroll-preprod.dchbx.org/assets/icons/check_radio_sheet-9de6b3ff89e891cb43ecc05a8dc84515.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_flat_75_ffffff_40x100-66b22589d0fc959b460476ea579ea2c5.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_highlight-soft_75_cccccc_1x100-cfa0baa2d39d4ddef2fd98d7f6685c0f.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-icons_222222_256x240-cbcd12c8048035bf8dae817212e922da.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_glass_55_fbf9ee_1x400-cd0eb7b399bba6ce203b35e4b98bd965.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_glass_75_e6e6e6_1x400-78b60ab54d71e2185242c1c59123ddec.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "Url=http://enroll-preprod.dchbx.org/assets/jquery-ui/ui-bg_glass_75_dadada_1x400-65c6a21b08a8c1151b2bbfbd64269d49.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "Url=http://enroll-preprod.dchbx.org/assets/glyphicons-halflings-regular-c575a06b0f5e17a30eccb36f64777cc3.woff2", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "Url=http://enroll-preprod.dchbx.org/assets/avenirltstd-black-30537c01d25f7c6edc1d149513dd3116.woff", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "Url=http://enroll-preprod.dchbx.org/assets/icons/bronze-circle-01104c3991c066061e2562e16b743243.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "Url=http://enroll-preprod.dchbx.org/assets/icons/silver-circle-215097bc30260c2d100146c2a2cf5917.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "Url=http://enroll-preprod.dchbx.org/assets/icons/gold-circle-9c65653709ef747c464dc5ef45320613.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "Url=http://enroll-preprod.dchbx.org/assets/icons/platinum-circle-413483a54b3f43af9fa1f2e6beedecb8.png", "Referer=http://enroll-preprod.dchbx.org/assets/application-6736572c10298d7d5b37b9dcf819b701.css", "ENDITEM",
	        "LAST");

	lr_end_transaction("INTEG_UNASSISTED_0005_Select_Unassisted", 2);

	
	return 0;
}
# 28 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 29 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualunassisted\\\\combined_IntegratedIndividualUnassisted.c" 2

