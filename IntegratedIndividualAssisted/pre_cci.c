# 1 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c"
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







 
 

















# 1 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

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

 
 
 

                               


 
 
 





















# 2 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

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



void addDynaTraceHeader(char* header){
	char* headerValue;
	int headerValueLength;
	int vuserid, scid;
	char *groupid, *timestamp;
	char* vuserstring=(char*) malloc(sizeof(char) * 10);

	web_save_timestamp_param("TimeStamp", "LAST");
	timestamp=lr_eval_string("{TimeStamp}");

	lr_whoami(&vuserid, &groupid, &scid);
	itoa(vuserid,vuserstring,10);

	headerValueLength = strlen(header) + 4 + strlen(vuserstring) + 4 + strlen(timestamp) + 1;
	headerValue = (char*) malloc(sizeof(char) * headerValueLength);
	strcpy(headerValue, header);
	strcat(headerValue,";VU=");
	strcat(headerValue,vuserstring);
	strcat(headerValue,";ID=");
	strcat(headerValue,timestamp);

	web_add_header("X-dynaTrace", headerValue);
	free(headerValue);
	free(vuserstring);
}


 
 

int ithinktime = 20 ;



# 3 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	 
	 
	 
			
	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_set_max_html_param_len("6270");

	srand(atoi(lr_eval_string("{MillisSeed}")));
	
	return 0;
}
# 4 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "ScriptFlow.c" 1
ScriptFlow()
{
	char dp_UserID[64];
	char p_LN[64];
 
	
	lr_save_int(RandomRange(3,10),"LNameLength");
	random_alpha("randomLN",atoi(lr_eval_string("{LNameLength}")));	

 
	
	random_alpha("p_FN",atoi(lr_eval_string("{LNameLength}")));
	
	SSNGenerator("Assisted_SSN", "p_SSN");
	
 
		
	sprintf(dp_UserID, "IA_%s_%s", lr_eval_string("{randomLN}"), lr_eval_string("{pSSN3dep1_1}"));
	
	lr_save_string(dp_UserID, "dp_UserID");

 
	               
 
	
	
 
	
 
		
	CreateUserFlow();
	
	Curam_StartApp_Misc_URLS();
	
	StartApplication();
	
	PrimaryMemberInfo();
	
	OtherMemberInfo();
	
	PrimaryIcomeSection();
	
	SpecialEnrollmentReuqest();
	
	Summary();
	
	SubmitApplication();
	
	ShowEligibility();
	
	Logout_Curam();
	
	return 0;
}
# 5 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "Drupal_Steps.c" 1
Drupal_Steps()
{

	web_add_cookie("SSESS637adb3fad27e0085dbb0898a1450649=UUEMFiy_c0rnu9vj3jgo-Mz0B_YoJJFvISlgNl-vp5Q; DOMAIN={p_IA_URL}");

	web_add_cookie("has_js=1; DOMAIN={p_IA_URL}");
	
	lr_start_transaction("0001_Load_Integrated_HomePage");
	
	addDynaTraceHeader("NA=0001_Load_Integrated_HomePage_{dp_UserID};PC=%7Bp_IA_URL%7D");
	
	web_url("{p_IA_URL}", 
		"URL=https://{p_IA_URL}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");
	lr_end_transaction("0001_Load_Integrated_HomePage",2);
	
	lr_think_time(13);

	lr_start_transaction("0002_Click_Create_Account");

	addDynaTraceHeader("NA=0002_Click_Create_Account_{dp_UserID};PC=CreateAccount");
	
	web_link("Create Account", 
		"Text=Create Account", 
		"Ordinal=1", 
		"Snapshot=t16.inf", 
		"LAST");

	lr_end_transaction("0002_Click_Create_Account",2);
	
	lr_think_time(13);
	return 0;
}
# 6 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "CreateUserFlow.c" 1
CreateUserFlow()
{
	

	
	lr_start_transaction("0003_Select_Individual");
	addDynaTraceHeader("NA=0003_Select_Individual_{dp_UserID};PC=assisted");
	
	
	web_url("assisted", 
		"URL=https://{p_IA_URL}/create-account/assisted", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_reg_find("Text=Create account",
	             "LAST");
	
	 
	web_reg_save_param_regexp("ParamName=authenticity_token", "RegExp=\\ content=\"(.*?)\"\\ ", "Ordinal=2", "SEARCH_FILTERS", "Scope=Body", "IgnoreRedirections=Yes", "RequestUrl=*/sign_up*", "LAST");

	
 
 
 
 
	
	web_url("search",
		"URL=http://enroll-preprod.dchbx.org/insured/consumer_role/search?aqhp=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");		
		
	lr_end_transaction("0003_Select_Individual",2);

	lr_think_time(13);

	lr_start_transaction("0004_Create_EnrollApp_User");

 

	web_submit_data("users",
		"Action=http://{p_EA_URL}/users",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=http://{p_EA_URL}/users/sign_up",
		"Snapshot=t18.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=utf8", "Value=✓", "ENDITEM",
		"Name=authenticity_token", "Value={authenticity_token}", "ENDITEM",
		"Name=user[referer]", "Value=", "ENDITEM",
 
		"Name=user[email]", "Value={dp_UserID}@test.com", "ENDITEM",
		"Name=user[password]", "Value=Abcd!234", "ENDITEM",
		"Name=user[password_confirmation]", "Value=Abcd!234", "ENDITEM",
		"Name=user[invitation_id]", "Value=", "ENDITEM",
		"Name=commit", "Value=Create account", "ENDITEM",
		"LAST");

	lr_end_transaction("0004_Create_EnrollApp_User",2);

	lr_think_time(13);

 
	web_reg_save_param_regexp( "ParamName=authenticity_token_1", "RegExp=\\ content=\"(.*?)\"\\ ", "Ordinal=2", "SEARCH_FILTERS", "Scope=Body", "IgnoreRedirections=No", "RequestUrl=*/match*", "LAST");

	 
	web_reg_save_param_regexp("ParamName=5D_Param","RegExp=person%5Buser_id%5D=(.*?)\">Continue","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","RequestUrl=*/match*","LAST");
	
	lr_start_transaction("0005_Personal_Info");

 

 
 
 
 
 
 
 
 
 
	
	web_submit_data("match", 
		"Action=http://{p_EA_URL}/insured/consumer_role/match", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={enrollPreprodURL}/insured/consumer_role/search?uqhp=true", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=utf8", "Value=✓", "ENDITEM", 
		"Name=authenticity_token", "Value={authenticity_token}", "ENDITEM", 
		"Name=people[id]", "Value=", "ENDITEM", 
		"Name=person[first_name]", "Value=assisted", "ENDITEM", 
		"Name=person[middle_name]", "Value=", "ENDITEM", 
		"Name=person[last_name]", "Value={randomLN}", "ENDITEM", 
		"Name=person[name_sfx]", "Value=", "ENDITEM", 
		"Name=person[dob]", "Value=1978-01-01", "ENDITEM", 
		"Name=jq_datepicker_ignore_person[dob]", "Value=01/01/1978", "ENDITEM", 
		"Name=person[ssn]", "Value={Assisted_SSN}", "ENDITEM", 
		"Name=person[no_ssn]", "Value=0", "ENDITEM", 
		"Name=person[gender]", "Value=male", "ENDITEM", 
		"LAST");	

	lr_end_transaction("0005_Personal_Info",2);

	lr_think_time(13);

 
	web_reg_save_param_regexp( "ParamName=tap_token", "RegExp=tap_token=(.*?)TapSubmitURL", "SEARCH_FILTERS", "Scope=Headers", "IgnoreRedirections=No", "RequestUrl=*/obrareq.cgi*", "LAST");

 
 
	
 

	lr_start_transaction("0006_Continue");

	addDynaTraceHeader("NA=0006_Continue_{dp_UserID};PC=consumer_role");
	
	web_submit_data("consumer_role",
		"Action=http://{p_EA_URL}/insured/consumer_role?person%5Bdob%5D=1978-01-01&person%5Bfirst_name%5D=assisted&person%5Bgender%5D=male&person%5Blast_name%5D={randomLN}&person%5Bmiddle_name%5D=&person%5Bname_sfx%5D=&person%5Bno_ssn%5D=0&person%5Bssn%5D={Assisted_SSN}&person%5Buser_id%5D={5D_Param}",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://{p_EA_URL}/insured/consumer_role/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=assisted&person%5Bmiddle_name%5D=&person%5Blast_name%5D={randomLN}&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D={Assisted_SSN}&person%5Bno_ssn%5D=0&person%5Bgender%5D=male",
		"Snapshot=t20.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=_method", "Value=post", "ENDITEM",
		"Name=authenticity_token", "Value={authenticity_token_1}", "ENDITEM",
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
		"LAST");

	lr_end_transaction("0006_Continue",2);

	web_add_cookie("has_js=1; DOMAIN={p_Webapp_URL}");

	lr_think_time(14);

 

	 
	web_reg_find("Text/IC=The username or password you entered is incorrect.", "SAVECOUNT=OIMLOGIN", "LAST" );
	web_reg_find("Text/IC=Please select three questions from the drop downs below", "SAVECOUNT=LOGIN_Success", "LAST" );
	
	lr_start_transaction("0007_Login_Curam");

	addDynaTraceHeader("NA=0007_Login_Curam_{dp_UserID};PC=loginAuth.do");
	
	web_submit_data("loginAuth.do",
		"Action=https://{p_Webapp_URL}/oaam_server/loginAuth.do",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token={tap_token}TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-8172100689942012479&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%252FNavigationLoginApp",
		"Snapshot=t21.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=clientOffset", "Value=-4", "ENDITEM",
 
		"Name=userid", "Value={dp_UserID}@test.com", "ENDITEM",
		"Name=pass", "Value=Abcd!234", "ENDITEM",
		"LAST");

	if (strcmp(lr_eval_string("{LOGIN_Success}"), "0") > 0)
	{
			lr_end_transaction("0007_Login_Curam",0);
	}
	else if (strcmp(lr_eval_string("{OIMLOGIN}"), "0") > 0)
	{
		lr_end_transaction("0007_Login_Curam",1);
		lr_error_message("1st Login Msg - Incorrect Login %s", lr_eval_string("{dp_UserID}"));
		lr_exit(2, 2);
	}
	else
	{
		lr_end_transaction("0007_Login_Curam",1);
		lr_error_message("Failed to Login User 1st Time in OIM %s", lr_eval_string("{dp_UserID}"));
		lr_exit(2, 2);
	}

 
	
	lr_think_time(14);
	
	web_reg_save_param("corr_fkvalue","LB=fk\" value=\"","RB=\">","LAST");
 
 
 
     
	web_reg_save_param_regexp("ParamName=question0", "RegExp='>(.*?)</option", "Ordinal=2",	"SEARCH_FILTERS",	"Scope=Body","IgnoreRedirections=Yes", "RequestUrl=*/registerQuestions.do*","LAST");
	web_reg_save_param_regexp("ParamName=question1", "RegExp='>(.*?)</option", "Ordinal=8", "SEARCH_FILTERS",	"Scope=Body","IgnoreRedirections=Yes", "RequestUrl=*/registerQuestions.do*","LAST");
	web_reg_save_param_regexp("ParamName=question2", "RegExp='>(.*?)</option", "Ordinal=14","SEARCH_FILTERS",	"Scope=Body","IgnoreRedirections=Yes", "RequestUrl=*/registerQuestions.do*","LAST");

	lr_start_transaction("0007_1_Login_Curam_authJump");	
		addDynaTraceHeader("NA=0007_1_Login_Curam_authJump_{dp_UserID};PC=authJump.do");
		web_url("authJump.do", 
		"URL=https://{p_Webapp_URL}/oaam_server/authJump.do?jump=false&clientOffset=-4", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/oaam_server/loginAuth.do", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=dhs/ui/dcas-ui-wrapper-css/calendar_multiday.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/date.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/datepicker.1.7.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/bootstrap-theme.min.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/bootstrap.min.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/field.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/extlink.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/views.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/bootstrap-theme.xtras.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/shared.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/ctools.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/v2_3up_landing.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/login.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/create-account.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"LAST");
	lr_end_transaction("0007_1_Login_Curam_authJump", 2);
 
 

	lr_save_string("question0", "question00");
	lr_save_string("question1", "question11");
	lr_save_string("question2", "question22");
	
	web_convert_param("question0", "SourceEncoding=HTML",
            "TargetEncoding=PLAIN", "LAST");

	web_convert_param("question1", "SourceEncoding=HTML",
            "TargetEncoding=PLAIN", "LAST");
	
	web_convert_param("question2", "SourceEncoding=HTML",
            "TargetEncoding=PLAIN", "LAST");
	
 	
	lr_think_time(14);
	
	lr_start_transaction("0008_Security_Questions");	
	
	addDynaTraceHeader("NA=0008_Security_Questions_{dp_UserID};PC=registerQuestions.do");

	web_submit_form("registerQuestions.do",
		"Snapshot=t9.inf", 
		"ITEMDATA", 
		"Name=question0", "Value={question0}", "ENDITEM", 
		"Name=Bharosa_Register_Pad0DataField", "Value=none", "ENDITEM", 
		"Name=question1", "Value={question1}", "ENDITEM", 
		"Name=Bharosa_Register_Pad1DataField", "Value=none", "ENDITEM", 
		"Name=question2", "Value={question2}", "ENDITEM", 
		"Name=Bharosa_Register_Pad2DataField", "Value=none", "ENDITEM", 
		"Name=register", "Value=Continue", "ENDITEM", 
		"LAST");
	
	
	 	
# 309 "CreateUserFlow.c"
	lr_end_transaction("0008_Security_Questions", 2);
	
	lr_think_time(14);
	
 
	web_reg_save_param_regexp(
		"ParamName=o3ctx",
		"RegExp=o3ctx=(.*?)\";\\\r\\\n\\ \\ \\ \\ \\ \\ \\\r",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/application.js*",
		"LAST");
	
lr_start_transaction("0009_Start_Application");
	
	addDynaTraceHeader("NA=0009_Start_Application_{dp_UserID};PC=application.do");
	web_url("application.do", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/userhome.jsp", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=CDEJ/jscript/ibmidxtk/idx/icons/commonIcons.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/themes/oneui/oneui-curam-custom.css", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/base.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", "ENDITEM", 
		"Url=CDEJ/themes/v6/css/optimal_browser_msg.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/application-banner.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/curam/app/ExternalApplication.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/curam/widget/menu/MenuPane.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/fx.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/Button.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/text.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormWidget.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_Widget.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/registry.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/main.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_WidgetBase.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/Stateful.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_OnDijitClickMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_FocusMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/focus.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/window.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/a11y.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/manager.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/uacss.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/hccss.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_CssStateMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/touch.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_TemplatedMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/string.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/cache.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormWidgetMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_ButtonMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/ToggleButton.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_ToggleButtonMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/ContentPane.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/i18n.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/_ContentPaneResizeMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/utils.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_Contained.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/html.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/parser.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/_base/url.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/date/stamp.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/nls/loading.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/TooltipDialog.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_DialogMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/BorderContainer.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/cookie.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/regexp.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/_LayoutWidget.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_Container.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/require.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/main.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage/_common.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage/Provider.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage/manager.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage/LocalStorageProvider.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage/WhatWGStorageProvider.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage/BehaviorStorageProvider.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage/CookieStorageProvider.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/layout/ContentPane.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/html/_base.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/layout/ExpandoPane.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/define.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/debug.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/RuntimeContext.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/Constants.js", "ENDITEM", 
		"Url=CDEJ/jscript/cm/_base/_dom.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/ResourceBundle.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/ScreenContext.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/onLoad.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/UimDialog.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/dialog.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/Refresh.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/tab.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/ContextPanel.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/ui/refresh/TabRefreshController.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/ui/refresh/RefreshEvent.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/DialogObject.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/UIMFragment.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/layout/TabContainer.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/TabContainer.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/_TabContainerBase.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/StackContainer.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/nls/common.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/TabController.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/StackController.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/Menu.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/popup.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/place.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/BackgroundIframe.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/DropDownMenu.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_MenuBase.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_KeyNavContainer.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/MenuItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/ScrollingTabController.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_WidgetsInTemplateMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_HasDropDown.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/widget/OptimalBrowserMessage.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/ui/ClientDataAccessor.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/app/ExternalApplication.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/widget/containers/TransitionContainer.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/cache/CacheLRU.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/collections/Dictionary.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/collections/_base.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/widget/menu/MenuPane.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/widget/componentWrappers/ListWraper.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/widget/form/ToggleButtonGroup.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/Tooltip.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/HoverCard.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/Moveable.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/Mover.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/common.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/autoscroll.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/TimedMoveable.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/Menu.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/_MenuOpenOnHoverMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/DropDownButton.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/dijit.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/WidgetSet.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/focus.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/place.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/popup.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/scroll.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/sniff.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/typematic.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/typematic.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/wai.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/window.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormValueWidget.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormValueMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/nls/HoverCard.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/CheckedMenuItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/MenuBar.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/MenuBar.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/Header.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/nls/Header.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/MenuDialog.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/io/iframe.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/_EventTriggerMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/MenuHeading.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/MenuSeparator.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/HoverHelpTooltip.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/nls/HoverHelpTooltip.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/PopupMenuBarItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/PopupMenuItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/MenuBarItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/ComboButton.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/widget/menu/BannerMenuItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/ui/AppExitConfirmation.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/ui/AppExitConditionHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/TextBox.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_TextBoxMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/application/nls/Debug.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/application/nls/en/Debug.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/application/nls/en-us/Debug.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/Commons.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/io/script.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/SlidingHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/NodeList-traverse.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/EventHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/AjaxHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/xml/parser.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/FormHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/UIMFragment.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/LoadingHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/Dialog.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/DialogUnderlay.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/PopupManager.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/eligibilityresults/EligibilityResult.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/eligibilityresults/CategoryAction.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/eligibilityresults/ProgramAction.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/eligibilityresults/Transitions.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/fx/easing.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/HoverHelpTooltip.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/_OrientedDropDown.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/InlineDropDown.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/Rotator.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/MenuItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/TitlePane.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/FragmentPane.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/DropDown.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/ContrastModeChooser.js", "ENDITEM", 
		"Url=CDEJ/jscript/HCRCommons.js", "ENDITEM", 
		"Url=CDEJ/jscript/HCRTitlePane.js", "ENDITEM", 
		"Url=CDEJ/jscript/HCREventHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/HCRAjaxHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/HCRDropDown.js", "ENDITEM", 
		"Url=CDEJ/jscript/HCRMenuItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/layout/ScrollPane.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_Templated.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/NumberSpinner.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_Spinner.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/RangeBoundTextBox.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/MappedTextBox.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/ValidationTextBox.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/nls/validate.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/NumberTextBox.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/number.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/cldr/nls/number.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/cldr/nls/en/number.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/Form.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/widget/AutoRotator.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/widget/Rotator.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/widget/rotator/Pan.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/widget/rotator/Slide.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/widget/rotator/Controller.js", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/image/menu-icons.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/css/main.css", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/fx/Toggler.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/resources/blank.gif", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/image/logo-f.png", "ENDITEM", 
		"Url=Images/cw_loading_icon.gif", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/css/custom.css", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/image/contentfull-bg.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/css/main.css", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/image/white-75-percent-transparent.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/css/main.css", "ENDITEM", 
		"Url=servlet/PathResolver?r=i&p=/config/tablayout/image[help_faq.png]", "ENDITEM", 
		"Url=servlet/PathResolver?r=i&p=/config/tablayout/image[ext-banner-user-home.png]", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/themes/oneui/idx/oneui/images/headerLogo.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/themes/oneui/oneui-curam-custom.css", "ENDITEM", 
		"Url=servlet/PathResolver?r=i&p=/config/tablayout/image[app-banner-logo.png]", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/themes/oneui/idx/oneui/images/headerIcons_TopBanner.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/themes/oneui/oneui-curam-custom.css", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/themes/oneui/idx/oneui/images/headerIcons.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/themes/oneui/oneui-curam-custom.css", "ENDITEM", 
		"Url=servlet/PathResolver?r=i&p=/config/tablayout/image[help_contactus.png]", "ENDITEM", 
		"LAST");
	
	lr_end_transaction("0009_Start_Application", 2);
	
	lr_think_time(14);

	
	return 0;
}
# 7 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "Curam_StartApp_Misc_URLS.c" 1
Curam_StartApp_Misc_URLS()
{
	
	lr_start_transaction("0010_Curam_StartApp_Misc_URLS");
	
		addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_1_{dp_UserID};PC=0010_ExternalApplication.html");
		web_custom_request("0010_ExternalApplication.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/curam/app/templates/ExternalApplication.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_2_{dp_UserID};PC=Menu.html");
	web_custom_request("Menu.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/Menu.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_3_{dp_UserID};PC=_MenuColumn.html");
	web_custom_request("_MenuColumn.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/_MenuColumn.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_4_{dp_UserID};PC=HoverCard.html");
	web_custom_request("HoverCard.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/HoverCard.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_5_{dp_UserID};PC=MenuDialog.html");
	web_custom_request("MenuDialog.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/MenuDialog.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_6_{dp_UserID};PC=MenuHeading.html");
	web_custom_request("MenuHeading.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/MenuHeading.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_7_{dp_UserID};PC=HoverHelpTooltip.html");
	web_custom_request("HoverHelpTooltip.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/HoverHelpTooltip.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_8_{dp_UserID};PC=InlineDropDown.html");
	web_custom_request("InlineDropDown.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/InlineDropDown.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_9_{dp_UserID};PC=Rotator.html");
	web_custom_request("Rotator.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/Rotator.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_10_{dp_UserID};PC=MenuItem.html");
	web_custom_request("MenuItem.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/MenuItem.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_11_{dp_UserID};PC=TitlePane.html");
	web_custom_request("TitlePane.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/TitlePane.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_12_{dp_UserID};PC=DropDown.html");
	web_custom_request("DropDown.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/DropDown.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_13_{dp_UserID};PC=ContrastModeChooser.html");
	web_custom_request("ContrastModeChooser.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/ContrastModeChooser.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_14_{dp_UserID};PC=PathResolver");
	web_submit_data("PathResolver", 
		"Action=https://{p_Webapp_URL}/CitizenPortal/servlet/PathResolver?r=j&p=/config/tablayout/extapp[CITWSAPP]", 
		"Method=POST", 
		"RecContentType=text/plain", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=dojo.preventCache", "Value=1443210486406", "ENDITEM", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_15_{dp_UserID};PC=CitizenWorkspace_userHomeResolverPage.do");
	web_custom_request("CitizenWorkspace_userHomeResolverPage.do",
		"URL=https://{p_Webapp_URL}/CitizenPortal/en_US/CitizenWorkspace_userHomeResolverPage.do?o3ctx={o3ctx}&testParam1=1&testParam2=2&dojo.preventCache=1443210486411",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do",
		"Snapshot=t25.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded",
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_16_{dp_UserID};PC=CitizenWorkspace_userHomeResolverPage.do_2");
	web_custom_request("CitizenWorkspace_userHomeResolverPage.do_2",
		"URL=https://{p_Webapp_URL}/CitizenPortal/en_US/CitizenWorkspace_userHomeResolverPage.do?o3ctx={o3ctx}&dojo.preventCache=1443210487060",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do",
		"Snapshot=t26.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded",
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_17_{dp_UserID};PC=application-banner-fragment.jspx");
	web_custom_request("application-banner-fragment.jspx", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/application-banner-fragment.jspx?dojo.preventCache=1443210487043", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_18_{dp_UserID};PC=UIMIFrameWrapperPage.do");
	web_custom_request("UIMIFrameWrapperPage.do",
		"URL=https://{p_Webapp_URL}/CitizenPortal/en_US/UIMIFrameWrapperPage.do?uimPageID=StandardUser_home&o3ctx={o3ctx}&pageParams=&dojo.preventCache=1443210488053",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do",
		"Snapshot=t28.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded",
		"EXTRARES",
		"URL=../servlet/PathResolver?r=i&p=/config/tablayout/image[ext-banner-user-arrow.png]", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/application-banner.css", "ENDITEM",
		"URL=../CDEJ/jscript/curam/core-uim.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", "ENDITEM",
		"URL=../CDEJ/jscript/dojotk/dojo/nls/cdej_en-us.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", "ENDITEM",
		"URL=../CDEJ/jscript/curam/application/nls/TabMenu.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", "ENDITEM",
		"URL=../CDEJ/jscript/curam/application/nls/en/TabMenu.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", "ENDITEM",
		"URL=../CDEJ/jscript/curam/application/nls/en-us/TabMenu.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", "ENDITEM",
		"LAST");

	lr_end_transaction("0010_Curam_StartApp_Misc_URLS", 2);
		
	lr_think_time(4);


	
	return 0;
}
# 8 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "StartApplication.c" 1
StartApplication()
{
	lr_start_transaction("0011_MaleWithAPTC_StartApplication");

	 
    web_reg_save_param_regexp(
        "ParamName=id",
        "RegExp=ttps://webpp\\.dchealthlink\\.com/CitizenPortal/cw/ResolvePage\\.do\\?id=(.*?)&page",
        "SEARCH_FILTERS",
        "Scope=Headers",
        "IgnoreRedirections=No",
        "RequestUrl=*/CitizenWorkspace_setupMotivationPage.do*",
        "LAST");

	addDynaTraceHeader("NA=0011_MaleWithAPTC_StartApplication{dp_UserID};PC=Apply for help paying for your health coverage");
	
	web_link("Start Application",
		"Text=Start Application",
	    "Snapshot=t67.inf",
	    "LAST");
	
	lr_end_transaction("0011_MaleWithAPTC_StartApplication",2);
	
	lr_think_time(10);
	
	web_reg_save_param_ex("ParamName=executionID","LB=executionID=","RB=&playerID", "SEARCH_FILTERS","Scope=Headers", "IgnoreRedirections=No","RequestUrl=*/StartMotivation.jspx*","LAST");

	web_reg_save_param("_o3synch", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	lr_start_transaction("11_MaleWithAPTC_12_Apply_For_Help");

	addDynaTraceHeader("NA=11_MaleWithAPTC_12_Apply_For_Help_2_{dp_UserID};PC=StartMotivation.jspx");
	
	web_url("StartMotivation.jspx",
		"URL=https://{p_Webapp_URL}/CitizenPortal/cw/StartMotivation.jspx?id={id}&name=FindAssistance&",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/cw/ResolvePage.do?id={id}&page=StartMotivation&name=FindAssistance",
		"Snapshot=t33.inf",
		"Mode=HTML",
		"LAST");
	
	lr_end_transaction("11_MaleWithAPTC_12_Apply_For_Help",2);
	
	web_reg_save_param("_o3synch", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	 

	lr_start_transaction("11_MaleWithAPTC_13_For_Whom");
	
	web_reg_save_param("p_o3synch_1", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	web_reg_find("Text=Getting Started",  "LAST" );
	
	addDynaTraceHeader("NA=11_MaleWithAPTC_13_For_Whom_{dp_UserID};PC=ProcessScript.do");
	web_custom_request("ProcessScript.do",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{{p_Webapp_URL}}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t34.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=AOS26001&__o3id7=&__o3id8=&__o3id9=&__o3ida=&__o3idb=&__o3idc=&__o3idd=&__o3ide=&__o3idf=&__o3id10=&__o3id11=&__o3id12=&__o3id13=&__o3id14=&__o3id15=&__o3id16=&__o3id17=&__o3id19=&__o3id1a=&__o3id1b=&__o3id1c=&__o3id1d=&__o3id1e=&__o3id0={executionID}&__o3id1=1048688&__o3id2=HealthCarePortal&__o3id3=InitialPage&__o3id4=0&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=InitialPage&syncToken=0&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048688&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FApplicationFiler.lastName%22%2C%22Last%20Name%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FApplicationFiler.middleName%22%2C%22Middle%20Name%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FApplication"
		"Filer.firstName%22%2C%22First%20Name%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id10%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FPREFERRED_CONTACT_TYPE%2FApplicationFiler.preferredContactMethod%22%2C%22Preferred%20Contact%20Method%22%2C%22PREFERRED_CONTACT_TYPE%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id11%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.homePhoneCountryCode%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FAPPLY_OR_SEEK_COVERAGE%2FApplic"
		"ationFiler.isApplyingOnBehalf%22%2C%22I%20am%20applying%22%2C%22IEG_CT_RADIO%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3idf%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FADDRESS_STATE%2FAddress.state%22%2C%22State%22%2C%22ADDRESS_STATE%22%2Cfalse%5D%2C%22__o3id18%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FApplicationFiler.canReceiveNotices%22%2C%22Please%20indicate%20if%20you%20are%20authorized%20to%20receive%20copies%20of%20notifications%20and%20communications%20sent%20to%20the%20Application%20Group.%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id1"
		"9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FApplicationFiler.organizationName%22%2C%22Name%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3ide%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.zipCodePlusFour%22%2C%22Zip%20Code%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.zipCode%22%2C%22Zip%20Code%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id16%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FApplicationFiler.applicantName%22%2C%22Enter%20the%20name%20of%20the%20applicant%20that%20authorized%20you%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.city%22%2C%22City%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id17%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FApplicationFiler.bel"
		"ongToOrganization%22%2C%22Do%20you%20belong%20to%20an%20organization%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.street2%22%2C%22Address%20Line%202%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id14%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.emailID%22%2C%22E-Mail%20Address%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.street1%22%2C%22Address%20Line%201%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id15%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FApplicationFiler.applicantAuthorizedDate%22%2C%22Enter%20the%20date%20the%20applicant%20authorized%20you%20to%20apply%20for%20coverage%20on%20their%20behalf%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3id12%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FC"
		"ontactInformation.homePhoneCode%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id13%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.homePhoneNumber%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1c%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FOrganizationContactInformation.phoneCode%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1b%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FOrganizationContactInformation.phoneCountryCode%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1e%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FOrganizationContactInformation.emailID%22%2C%22E-Mail%20Address%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1d%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FOrganizationContactInformation.phoneNumber%22%2C%2"
		"2Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1a%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_INT32%2FApplicationFiler.organizationID%22%2C%22Identification%20Number%22%2C%22IEG_INT32%22%2Cfalse%5D%7D&__o3synch={_o3synch}&__o3fmeta_mandatory_data=__o3id9%2C__o3id7%2C__o3id6%2C__o3id19%2C__o3id16%2C__o3id17%2C__o3id15%2C__o3id1a",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_13_For_Whom",2);
		
	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_14_Privacy_Act");
	
	web_reg_save_param("p_o3synch_2", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	web_reg_find("Text=Experian Terms",  "LAST" );
	
	addDynaTraceHeader("NA=11_MaleWithAPTC_14_Privacy_Act_{dp_UserID};PC=ProcessScript.do_2");
	
	web_submit_data("ProcessScript.do_2",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t35.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__o3id0", "Value={executionID}", "ENDITEM",
		"Name=__o3id1", "Value=1048692", "ENDITEM",
		"Name=__o3id2", "Value=HealthCarePortal", "ENDITEM",
		"Name=__o3id3", "Value=IntroductionPage", "ENDITEM",
		"Name=__o3id4", "Value=1", "ENDITEM",
		"Name=__o3id5", "Value=true", "ENDITEM",
		"Name=validate-save-and-exit", "Value=true", "ENDITEM",
		"Name=iegExecutionID", "Value={executionID}", "ENDITEM",
		"Name=scriptID", "Value=HealthCarePortal", "ENDITEM",
		"Name=pageID", "Value=IntroductionPage", "ENDITEM",
		"Name=syncToken", "Value=1", "ENDITEM",
		"Name=iegScriptVersion", "Value=V1", "ENDITEM",
		"Name=iegScriptType", "Value=Portal", "ENDITEM",
		"Name=forwardParams", "Value=&id={id}", "ENDITEM",
		"Name=o3ctx", "Value=1048692", "ENDITEM",
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", "ENDITEM",
		"Name=__o3fmeta_mandatory_data", "Value=", "ENDITEM",
		"Name=__o3synch", "Value={p_o3synch_1}", "ENDITEM",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_14_Privacy_Act",2);
	
	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_15_Experian_Terms");

	web_reg_find("Text=Please Tell Us About You",  "LAST" );
	
	web_reg_save_param("p_o3synch_3", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_15_Experian_Terms_{dp_UserID};PC=ProcessScript.do_3");
	web_custom_request("ProcessScript.do_3",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t36.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=AG1&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=AgreementPage&__o3id4=2&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=AgreementPage&syncToken=2&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FAGREE_OR_DISAGREE%2FApplicationFiler.isAgreedForTermsAndConditions%22%2C%22Please%20select%20one%20of%20the%20following%20options%20to%20proceed%20ahead%3A%22%2C%22IEG_CT_RADIO%22%2Ctrue%5D%2C%22_"
		"_o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id6&__o3synch={p_o3synch_2}",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_15_Experian_Terms",2);
	
	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_16_About_You");
	
	web_reg_save_param("p_o3synch_4", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	web_reg_find("Text=Your Details", "LAST" );
	
	addDynaTraceHeader("NA=11_MaleWithAPTC_16_About_You_{dp_UserID};PC=ProcessScript.do_4");
	web_submit_data("ProcessScript.do_4",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t37.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__o3id0", "Value={executionID}", "ENDITEM",
		"Name=__o3id1", "Value=1048692", "ENDITEM",
		"Name=__o3id2", "Value=HealthCarePortal", "ENDITEM",
		"Name=__o3id3", "Value=AboutYouBreaker", "ENDITEM",
		"Name=__o3id4", "Value=3", "ENDITEM",
		"Name=__o3id5", "Value=true", "ENDITEM",
		"Name=validate-save-and-exit", "Value=true", "ENDITEM",
		"Name=iegExecutionID", "Value={executionID}", "ENDITEM",
		"Name=scriptID", "Value=HealthCarePortal", "ENDITEM",
		"Name=pageID", "Value=AboutYouBreaker", "ENDITEM",
		"Name=syncToken", "Value=3", "ENDITEM",
		"Name=iegScriptVersion", "Value=V1", "ENDITEM",
		"Name=iegScriptType", "Value=Portal", "ENDITEM",
		"Name=forwardParams", "Value=&id={id}", "ENDITEM",
		"Name=o3ctx", "Value=1048692", "ENDITEM",
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", "ENDITEM",
		"Name=__o3fmeta_mandatory_data", "Value=", "ENDITEM",
		"Name=__o3synch", "Value={p_o3synch_3}", "ENDITEM",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_16_About_You",2);

	lr_think_time(ithinktime);

	
	return 0;
}
# 9 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "PrimaryMemberInfo.c" 1
PrimaryMemberInfo()
{
	lr_start_transaction("11_MaleWithAPTC_17_Applicant_Information");
	
	web_reg_save_param("p_o3synch_5", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	web_reg_find("Text=Race and Ethnicity", "LAST" );
	
	addDynaTraceHeader("NA=11_MaleWithAPTC_17_Applicant_Information_{dp_UserID};PC=ProcessScript.do_5");
	web_custom_request("ProcessScript.do_5",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t38.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6={p_FN}&__o3id7=&__o3id8={randomLN}&__o3id9=1960-04-20&__o3ida=SX1&__o3idb=YN2&__o3idc=609%20H%20St%20NE&__o3idd=&__o3ide=&__o3idf=Washington&__o3id10=DC&__o3id11=20002&__o3id12=&__o3id13=&__o3id14=&__o3id15=YN1&__o3id16=&__o3id17=&__o3id18=&__o3id19=&__o3id1a=&__o3id1b=&__o3id1c=&__o3id1d=&__o3id1e=&__o3id21=&__o3id22=&__o3id23=&__o3id24=&__o3id25=&__o3id26=&__o3id27=&__o3id28=&__o3id29=&__o3id2a=&__o3id2b=&__o3id2c=YN1&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=AboutYouPage&__o3id4=4&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=AboutYouPage&syncToken=4&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FPerson.dateOfBirth%22%2C%22Date%20of%20Birth%22%2C%22IEG_DATE%22%2Ctrue%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FPerson.l"
		"astName%22%2C%22Last%20Name%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FPerson.middleName%22%2C%22Middle%20Name%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id2c%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isApplicant%22%2C%22Do%20you%20want%20to%20find%20out%20if%20you%20can%20get%20Medicaid%20or%20help%20paying%20for%20health%20coverage%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id10%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FADDRESS_STATE%2FAddress.state%22%2C%22State%22%2C%22ADDRESS_STATE%22%2Ctrue%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id22%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.homePhoneCountryCode%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id11%22%3A"
		"%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.zipCode%22%2C%22Zip%20Code%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id21%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FPREFERRED_LANGUAGE%2FPerson.PreferredLanguageCommunication%22%2C%22Preferred%20language%20for%20communication%22%2C%22PREFERRED_LANGUAGE%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id20%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.paperCommunication%22%2C%22Do%20you%20wish%20not%20to%20receive%20paper%20communication%3F%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FPerson.firstName%22%2C%22First%20Nam"
		"e%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3idf%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.city%22%2C%22City%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3id18%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FMailingAddress.street2%22%2C%22Address%20Line%202%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id19%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FMailingAddress.suiteNum%22%2C%22Apt%2FSuite%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3ide%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswe"
		"rs%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.street2%22%2C%22Address%20Line%202%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.suiteNum%22%2C%22Apt%2FSuite%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id16%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.hasMailingAddress%22%2C%22Do%20you%20have%20a%20mailing%20address%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.street1%22%2C%22Address%20Line%201%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3id17%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FMailingAddress.street1%22%2C%22Address%20Line%201%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id14%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isTemporarilyAbsent%22%2C%22Have%20you%20been%20living%20outside"
		"%20District%20of%20Columbia%20for%2090%20days%20or%20less%20and%20plan%20to%20return%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.areYouHomeless%22%2C%22Are%20you%20homeless%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id15%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isMailingAddressSameAsHome%22%2C%22Is%20the%20mailing%20address%20the%20same%20as%20your%20home%20address%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_GENDER%2FPerson.gender%22%2C%22Gender%22%2C%22IEG_GENDER%22%2Ctrue%5D%2C%22__o3id12%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FAddress.zipCodePlusFour%22%2C%22Zip%20Code%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id13%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isStateResident%22%2C%22Are%20"
		"you%20a%20District%20of%20Columbia%20resident%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id2a%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.emailID%22%2C%22E-Mail%20Address%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id2b%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.prefEmailID%22%2C%22E-Mail%20Address%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1f%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.electronicNotification%22%2C%22Do%20you%20wish%20to%20receive%20electronic%20notification%3F%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id1c%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FMailingAddress.zipCode%22%2C%22Zip%20Code%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1b%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FADDRESS_STATE%2FMailingAddress.state%22%2C%22State%22%2C%22ADDRESS_STATE%2"
		"2%2Cfalse%5D%2C%22__o3id1e%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FPREFERRED_CONTACT_TYPE%2FPerson.preferredContactMethod%22%2C%22Preferred%20Contact%20Method.%22%2C%22PREFERRED_CONTACT_TYPE%22%2Cfalse%5D%2C%22__o3id1d%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FMailingAddress.zipCodePlusFour%22%2C%22Zip%20Code%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id27%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.altPhoneCode%22%2C%22Alternate%20Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id28%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.altPhoneNumber%22%2C%22Alternate%20Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id29%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FPHONE_TYPE%2FContactInformation.altPhoneType%22%2C%22Type%22%2C%22PHONE_TYPE%22%2Cfalse%5D%2C%22__o3id23%22%3A%5B%22%"
		"2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.homePhoneCode%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id24%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.homePhoneNumber%22%2C%22Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id25%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FPHONE_TYPE%2FContactInformation.phoneType%22%2C%22Type%22%2C%22PHONE_TYPE%22%2Cfalse%5D%2C%22__o3id26%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FContactInformation.altPhoneCountryCode%22%2C%22Alternate%20Phone%20Number%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id1a%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FMailingAddress.city%22%2C%22City%22%2C%22IEG_STRING%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id9%2C__o3id8%2C__o3id2c%2C__o3id10%2C__o3id11%2C__o3id6%2C__o3idf%2C__o3id16%2C__o3idc%2C__o"
		"3id17%2C__o3idb%2C__o3id14%2C__o3ida%2C__o3id15%2C__o3id13%2C__o3id2b%2C__o3id1c%2C__o3id1b%2C__o3id1a&__o3synch={p_o3synch_4}",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_17_Applicant_Information",2);

	lr_think_time(ithinktime);
	
	lr_start_transaction("11_MaleWithAPTC_18_Race_Ethnicity");
	
	web_reg_find("Text=street name",  "LAST" );
	
	web_reg_save_param("p_o3synch_6", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_18_Race_Ethnicity_{dp_UserID};PC=ProcessScript.do_6");
	web_custom_request("ProcessScript.do_6",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t39.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3ida=true&__o3id17=YN1&__o3id18={p_SSN}&__o3id19=&__o3id1a=&__o3id1b=YN1&__o3id1c=YN2&__o3id1d=&__o3id1e=&__o3id1f=&__o3id20=&__o3id21=&__o3id22=&__o3id23=&__o3id24=YN2&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=MoreAboutYouPage&__o3id4=5&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=MoreAboutYouPage&syncToken=5&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.hawaiianOrPacificIslander%22%2C%22Hawaiian%20or%20Pacific%20Islander%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.asian%22%2C%22Asian%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.blackOrAfricanAmerican%22%2C%22Bla"
		"ck%20or%20African%20American%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id10%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.chinese%22%2C%22Chinese%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id22%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isVeteranOrActiveMilitaryMember%22%2C%22Are%20you%20an%20honorably%20discharged%20veteran%20or%20active%20duty%20member%20of%20the%20military%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id11%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.filipino%22%2C%22Filipino%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id21%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnsw"
		"ers%2Fans%2FIEG_YES_NO%2FPerson.usEntryStatus%22%2C%22Have%20you%20lived%20in%20the%20U.S.%20on%20or%20after%20August%2022%2C%201996%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id20%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FSUPPORTING_DOCUMENT_TYPE_LAWFULALIEN%2FPerson.supportingDocumentLawfulAlien%22%2C%22Supporting%20Document%22%2C%22SUPPORTING_DOCUMENT_TYPE_LAWFULALIEN%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isNativeAmericanOrAlaskanIndian%22%2C%22Are%20you%20an%20American%20Indian%2FAlaska%20Native%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fh"
		"f%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3idf%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.chicano%22%2C%22Chicano%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id18%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FPerson.ssn%22%2C%22SSN%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3id19%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.ssnApplied%22%2C%22Have%20you%20applied%20for%20SSN%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3ide%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.puertoRican%22%2C%22Puerto%20Rican%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.cuban%22%2C%22Cuban%22%2C%22IEG_BOOLEA"
		"N%22%2Cfalse%5D%2C%22__o3id16%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.vietnamese%22%2C%22Vietnamese%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.mexicanOrMexAmerican%22%2C%22Mexican%20Or%20Mexican%20American%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id17%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.doesHaveSSNForAddHouseHold%22%2C%22Do%20you%20have%20an%20SSN%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.hispanicOrLatino%22%2C%22Hispanic%2C%20Latino%20or%20Spanish%20origin%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id14%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.korean%22%2C%22Korean%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id15%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers"
		"%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.asianIndian%22%2C%22Asian%20Indian%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.whiteOrCaucasian%22%2C%22White%20or%20Caucasian%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id12%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.japanese%22%2C%22Japanese%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id13%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.guanamanianOrChamorro%22%2C%22Guanamanian%20or%20Chamorro%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id1f%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.usEntryStatus1%22%2C%22Have%20you%20lived%20in%20the%20U.S.%20on%20or%20after%20August%2022%2C%201996%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id1c%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerso"
		"n.isNaturalizedCitizen%22%2C%22Are%20you%20a%20naturalized%20citizen%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id1b%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isUSCitizen%22%2C%22Are%20you%20a%20US%20Citizen%20or%20US%20National%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id1e%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FSUPPORTING_DOCUMENT_TYPE_USNATIONAL%2FPerson.supportingDocumentUSNational%22%2C%22Document%20Type%22%2C%22SUPPORTING_DOCUMENT_TYPE_USNATIONAL%22%2Cfalse%5D%2C%22__o3id1d%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.lawfullyPresent%22%2C%22Do%20you%20have%20an%20eligible%20immigration%20status%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id23%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isSpouseOrDependantOfVeteran%22%2C%22Are%20you%20the%20spouse%20or%20dependent%20child%20of%20such%20a%20veteran%20or%20individual%20in%20"
		"active%20duty%20status%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id24%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isReceivingBenefits%22%2C%22Is%20{p_FN}%20currently%20enrolled%20on%20a%20health%20program%20or%20plan%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id1a%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FSSN_NOT_APPLIED_REASON%2FPerson.ssnNotAppliedReason%22%2C%22Reason%2C%20why%20you%20don't%20have%20an%20SSN%22%2C%22SSN_NOT_APPLIED_REASON%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id22%2C__o3id21%2C__o3id20%2C__o3id6%2C__o3id18%2C__o3id19%2C__o3id17%2C__o3id1f%2C__o3id1c%2C__o3id1b%2C__o3id1e%2C__o3id1d%2C__o3id23%2C__o3id24%2C__o3id1a&__o3synch={p_o3synch_5}",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_18_Race_Ethnicity",2);
	
	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_19_St_Address");

	web_reg_find("Text=home was built",  "LAST" );
	
	web_reg_save_param("p_o3synch_7", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_19_St_Address_{dp_UserID};PC=ProcessScript.do_7");
	web_submit_data("ProcessScript.do_7",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t40.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__o3id6", "Value=0", "ENDITEM",
		"Name=__o3id0", "Value={executionID}", "ENDITEM",
		"Name=__o3id1", "Value=1048692", "ENDITEM",
		"Name=__o3id2", "Value=HealthCarePortal", "ENDITEM",
		"Name=__o3id3", "Value=RIDPPrimaryResponse", "ENDITEM",
		"Name=__o3id4", "Value=6", "ENDITEM",
		"Name=__o3id5", "Value=true", "ENDITEM",
		"Name=validate-save-and-exit", "Value=true", "ENDITEM",
		"Name=iegExecutionID", "Value={executionID}", "ENDITEM",
		"Name=scriptID", "Value=HealthCarePortal", "ENDITEM",
		"Name=pageID", "Value=RIDPPrimaryResponse", "ENDITEM",
		"Name=syncToken", "Value=6", "ENDITEM",
		"Name=iegScriptVersion", "Value=V1", "ENDITEM",
		"Name=iegScriptType", "Value=Portal", "ENDITEM",
		"Name=forwardParams", "Value=&id={id}", "ENDITEM",
		"Name=o3ctx", "Value=1048692", "ENDITEM",
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id6\":[\"/data/si/ACTION/answers$currentPageAnswers/ans/IEG_STRING/RIDPPrimaryResponseOptions.optionSelected\",\"\",\"IEG_STRING\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", "ENDITEM",
		"Name=__o3fmeta_mandatory_data", "Value=", "ENDITEM",
		"Name=__o3synch", "Value={p_o3synch_6}", "ENDITEM",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_19_St_Address",2);
	
	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_20_Home_Buit_Year");

	web_reg_find("Text=level of education", "LAST" );
	
	web_reg_save_param("p_o3synch_8", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_20_Home_Buit_Year_{dp_UserID};PC=ProcessScript.do_8");
	web_submit_data("ProcessScript.do_8",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t41.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__o3id6", "Value=2", "ENDITEM",
		"Name=__o3id0", "Value={executionID}", "ENDITEM",
		"Name=__o3id1", "Value=1048692", "ENDITEM",
		"Name=__o3id2", "Value=HealthCarePortal", "ENDITEM",
		"Name=__o3id3", "Value=RIDPPrimaryResponse", "ENDITEM",
		"Name=__o3id4", "Value=7", "ENDITEM",
		"Name=__o3id5", "Value=true", "ENDITEM",
		"Name=validate-save-and-exit", "Value=true", "ENDITEM",
		"Name=iegExecutionID", "Value={executionID}", "ENDITEM",
		"Name=scriptID", "Value=HealthCarePortal", "ENDITEM",
		"Name=pageID", "Value=RIDPPrimaryResponse", "ENDITEM",
		"Name=syncToken", "Value=7", "ENDITEM",
		"Name=iegScriptVersion", "Value=V1", "ENDITEM",
		"Name=iegScriptType", "Value=Portal", "ENDITEM",
		"Name=forwardParams", "Value=&id={id}", "ENDITEM",
		"Name=o3ctx", "Value=1048692", "ENDITEM",
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id6\":[\"/data/si/ACTION/answers$currentPageAnswers/ans/IEG_STRING/RIDPPrimaryResponseOptions.optionSelected\",\"\",\"IEG_STRING\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", "ENDITEM",
		"Name=__o3fmeta_mandatory_data", "Value=", "ENDITEM",
		"Name=__o3synch", "Value={p_o3synch_7}", "ENDITEM",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_20_Home_Buit_Year",2);

	lr_think_time(ithinktime);
	
	lr_start_transaction("11_MaleWithAPTC_21_Education_Level");

	web_reg_find("Text=bedrooms",  "LAST" );
	
	web_reg_save_param("p_o3synch_9", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_21_Education_Level_{dp_UserID};PC=ProcessScript.do_9");
	web_submit_data("ProcessScript.do_9",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t42.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__o3id6", "Value=0", "ENDITEM",
		"Name=__o3id0", "Value={executionID}", "ENDITEM",
		"Name=__o3id1", "Value=1048692", "ENDITEM",
		"Name=__o3id2", "Value=HealthCarePortal", "ENDITEM",
		"Name=__o3id3", "Value=RIDPPrimaryResponse", "ENDITEM",
		"Name=__o3id4", "Value=8", "ENDITEM",
		"Name=__o3id5", "Value=true", "ENDITEM",
		"Name=validate-save-and-exit", "Value=true", "ENDITEM",
		"Name=iegExecutionID", "Value={executionID}", "ENDITEM",
		"Name=scriptID", "Value=HealthCarePortal", "ENDITEM",
		"Name=pageID", "Value=RIDPPrimaryResponse", "ENDITEM",
		"Name=syncToken", "Value=8", "ENDITEM",
		"Name=iegScriptVersion", "Value=V1", "ENDITEM",
		"Name=iegScriptType", "Value=Portal", "ENDITEM",
		"Name=forwardParams", "Value=&id={id}", "ENDITEM",
		"Name=o3ctx", "Value=1048692", "ENDITEM",
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id6\":[\"/data/si/ACTION/answers$currentPageAnswers/ans/IEG_STRING/RIDPPrimaryResponseOptions.optionSelected\",\"\",\"IEG_STRING\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", "ENDITEM",
		"Name=__o3fmeta_mandatory_data", "Value=", "ENDITEM",
		"Name=__o3synch", "Value={p_o3synch_8}", "ENDITEM",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_21_Education_Level",2);
	
	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_22_No_Of_Bedroom");

	web_reg_find("Text=Application Group", "LAST" );
	
	web_reg_save_param("p_o3synch_10", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_22_No_Of_Bedroom_{dp_UserID};PC=ProcessScript.do_10");
	web_submit_data("ProcessScript.do_10",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t43.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__o3id6", "Value=0", "ENDITEM",
		"Name=__o3id0", "Value={executionID}", "ENDITEM",
		"Name=__o3id1", "Value=1048692", "ENDITEM",
		"Name=__o3id2", "Value=HealthCarePortal", "ENDITEM",
		"Name=__o3id3", "Value=RIDPPrimaryResponse", "ENDITEM",
		"Name=__o3id4", "Value=9", "ENDITEM",
		"Name=__o3id5", "Value=true", "ENDITEM",
		"Name=validate-save-and-exit", "Value=true", "ENDITEM",
		"Name=iegExecutionID", "Value={executionID}", "ENDITEM",
		"Name=scriptID", "Value=HealthCarePortal", "ENDITEM",
		"Name=pageID", "Value=RIDPPrimaryResponse", "ENDITEM",
		"Name=syncToken", "Value=9", "ENDITEM",
		"Name=iegScriptVersion", "Value=V1", "ENDITEM",
		"Name=iegScriptType", "Value=Portal", "ENDITEM",
		"Name=forwardParams", "Value=&id={id}", "ENDITEM",
		"Name=o3ctx", "Value=1048692", "ENDITEM",
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id6\":[\"/data/si/ACTION/answers$currentPageAnswers/ans/IEG_STRING/RIDPPrimaryResponseOptions.optionSelected\",\"\",\"IEG_STRING\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", "ENDITEM",
		"Name=__o3fmeta_mandatory_data", "Value=", "ENDITEM",
		"Name=__o3synch", "Value={p_o3synch_9}", "ENDITEM",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_22_No_Of_Bedroom",2);

	lr_think_time(ithinktime);
	
	lr_start_transaction("11_MaleWithAPTC_23_Application_Group");
	
	web_reg_save_param("p_o3synch_11", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_23_Application_Group_{dp_UserID};PC=ProcessScript.do_11");
	
	web_submit_data("ProcessScript.do_11",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t44.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__o3id0", "Value={executionID}", "ENDITEM",
		"Name=__o3id1", "Value=1048692", "ENDITEM",
		"Name=__o3id2", "Value=HealthCarePortal", "ENDITEM",
		"Name=__o3id3", "Value=HouseholdBreaker", "ENDITEM",
		"Name=__o3id4", "Value=10", "ENDITEM",
		"Name=__o3id5", "Value=true", "ENDITEM",
		"Name=validate-save-and-exit", "Value=true", "ENDITEM",
		"Name=iegExecutionID", "Value={executionID}", "ENDITEM",
		"Name=scriptID", "Value=HealthCarePortal", "ENDITEM",
		"Name=pageID", "Value=HouseholdBreaker", "ENDITEM",
		"Name=syncToken", "Value=10", "ENDITEM",
		"Name=iegScriptVersion", "Value=V1", "ENDITEM",
		"Name=iegScriptType", "Value=Portal", "ENDITEM",
		"Name=forwardParams", "Value=&id={id}", "ENDITEM",
		"Name=o3ctx", "Value=1048692", "ENDITEM",
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", "ENDITEM",
		"Name=__o3fmeta_mandatory_data", "Value=", "ENDITEM",
		"Name=__o3synch", "Value={p_o3synch_10}", "ENDITEM",
		"LAST");
	
	lr_end_transaction("11_MaleWithAPTC_23_Application_Group",2);

	lr_think_time(ithinktime);
	
	return 0;
}
# 10 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "OtherMemberInfo.c" 1
OtherMemberInfo()
{

	lr_start_transaction("11_MaleWithAPTC_24_Add_People");

	web_reg_find("Text=Application Group", "LAST" );
	
	web_reg_save_param("p_o3synch_12", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_24_Add_People_{dp_UserID};PC=ProcessScript.do_12");
	web_custom_request("ProcessScript.do_12",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t45.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=AnyHouseholdMembersPage&__o3id4=11&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=AnyHouseholdMembersPage&syncToken=11&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FanyHouseholdMembers%22%2C%22Is%20there%20anyone%20else%20in%20the%20Application%20Group%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2"
		"FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id6&__o3synch={p_o3synch_11}",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_24_Add_People",2);
	
	lr_think_time(ithinktime);
	
	return 0;
}
# 11 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "PrimaryIcomeSection.c" 1
PrimaryIcomeSection()
{
	lr_start_transaction("11_MaleWithAPTC_25_Tax_Filer");
	
	web_reg_find("Text=eligibility for", "LAST" );	
	
	web_reg_save_param("p_o3synch_13", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_25_Tax_Filer_{dp_UserID};PC=ProcessScript.do_13");
	web_submit_data("ProcessScript.do_13",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t46.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__o3id6", "Value=true", "ENDITEM",
		"Name=__o3id0", "Value={executionID}", "ENDITEM",
		"Name=__o3id1", "Value=1048692", "ENDITEM",
		"Name=__o3id2", "Value=HealthCarePortal", "ENDITEM",
		"Name=__o3id3", "Value=TaxFilersPage", "ENDITEM",
		"Name=__o3id4", "Value=12", "ENDITEM",
		"Name=__o3id5", "Value=true", "ENDITEM",
		"Name=validate-save-and-exit", "Value=true", "ENDITEM",
		"Name=iegExecutionID", "Value={executionID}", "ENDITEM",
		"Name=scriptID", "Value=HealthCarePortal", "ENDITEM",
		"Name=pageID", "Value=TaxFilersPage", "ENDITEM",
		"Name=syncToken", "Value=12", "ENDITEM",
		"Name=iegScriptVersion", "Value=V1", "ENDITEM",
		"Name=iegScriptType", "Value=Portal", "ENDITEM",
		"Name=forwardParams", "Value=&id={id}", "ENDITEM",
		"Name=o3ctx", "Value=1048692", "ENDITEM",
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id6\":[\"/data/si/ACTION/answers$currentPageAnswers/ans/IEG_BOOLEAN/Person.isTaxFiler.0\",\"\",\"IEG_BOOLEAN\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", "ENDITEM",
		"Name=__o3fmeta_mandatory_data", "Value=", "ENDITEM",
		"Name=__o3synch", "Value={p_o3synch_12}", "ENDITEM",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_25_Tax_Filer",2);

	lr_think_time(ithinktime);
	
	lr_start_transaction("11_MaleWithAPTC_26_Tax_Dependent");
	
	web_reg_save_param("p_o3synch_14", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	web_reg_find("Text=summary page", "LAST" );
	
	addDynaTraceHeader("NA=11_MaleWithAPTC_26_Tax_Dependent_{dp_UserID};PC=ProcessScript.do_14");
	web_custom_request("ProcessScript.do_14",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t47.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=wasPersonTabs=true&__o3id7=YN2&__o3id8=&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=TaxNotFilingTogetherPage&__o3id4=13&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=TaxNotFilingTogetherPage&syncToken=13&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isClaimedAsYourself%22%2C%22Is%20this%20person%20you%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isClaimedAsDependentOfExternalPerson%22%2C%22Is%20anyone%20outside%20this%20Application%20Group%20expected%20to%20enter%20{p_FN}%20as%20dependent%20on%20their%20tax%20return%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfal"
		"se%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FPerson.TaxFilerRelationship.personID%22%2C%22%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id8%2C__o3id7&__o3synch={p_o3synch_13}",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_26_Tax_Dependent",2);

	lr_think_time(ithinktime);
	
	lr_start_transaction("11_MaleWithAPTC_27_Group_Summary");

	web_reg_find("Text=Group Income",  "LAST" );
	
	web_reg_save_param("p_o3synch_15", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_27_Group_Summary_{dp_UserID};PC=ProcessScript.do_15");
	web_submit_data("ProcessScript.do_15",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t48.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__o3id0", "Value={executionID}", "ENDITEM",
		"Name=__o3id1", "Value=1048692", "ENDITEM",
		"Name=__o3id2", "Value=HealthCarePortal", "ENDITEM",
		"Name=__o3id3", "Value=HouseholdSummary2", "ENDITEM",
		"Name=__o3id4", "Value=14", "ENDITEM",
		"Name=__o3id5", "Value=true", "ENDITEM",
		"Name=validate-save-and-exit", "Value=true", "ENDITEM",
		"Name=iegExecutionID", "Value={executionID}", "ENDITEM",
		"Name=scriptID", "Value=HealthCarePortal", "ENDITEM",
		"Name=pageID", "Value=HouseholdSummary2", "ENDITEM",
		"Name=syncToken", "Value=14", "ENDITEM",
		"Name=iegScriptVersion", "Value=V1", "ENDITEM",
		"Name=iegScriptType", "Value=Portal", "ENDITEM",
		"Name=forwardParams", "Value=&id={id}", "ENDITEM",
		"Name=o3ctx", "Value=1048692", "ENDITEM",
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", "ENDITEM",
		"Name=__o3fmeta_mandatory_data", "Value=", "ENDITEM",
		"Name=__o3synch", "Value={p_o3synch_14}", "ENDITEM",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_27_Group_Summary",2);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_28_Group_Income");
	
	web_reg_save_param("p_o3synch_16", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_28_Group_Income_{dp_UserID};PC=ProcessScript.do_16");
	web_submit_data("ProcessScript.do_16",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t49.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__o3id0", "Value={executionID}", "ENDITEM",
		"Name=__o3id1", "Value=1048692", "ENDITEM",
		"Name=__o3id2", "Value=HealthCarePortal", "ENDITEM",
		"Name=__o3id3", "Value=IncomeBreaker", "ENDITEM",
		"Name=__o3id4", "Value=15", "ENDITEM",
		"Name=__o3id5", "Value=true", "ENDITEM",
		"Name=validate-save-and-exit", "Value=true", "ENDITEM",
		"Name=iegExecutionID", "Value={executionID}", "ENDITEM",
		"Name=scriptID", "Value=HealthCarePortal", "ENDITEM",
		"Name=pageID", "Value=IncomeBreaker", "ENDITEM",
		"Name=syncToken", "Value=15", "ENDITEM",
		"Name=iegScriptVersion", "Value=V1", "ENDITEM",
		"Name=iegScriptType", "Value=Portal", "ENDITEM",
		"Name=forwardParams", "Value=&id={id}", "ENDITEM",
		"Name=o3ctx", "Value=1048692", "ENDITEM",
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", "ENDITEM",
		"Name=__o3fmeta_mandatory_data", "Value=", "ENDITEM",
		"Name=__o3synch", "Value={p_o3synch_15}", "ENDITEM",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_28_Group_Income",2);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_29_Income");

	web_reg_find("Text=Income Type",  "LAST" );
	
	web_reg_save_param("p_o3synch_17", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_29_Income_{dp_UserID};PC=ProcessScript.do_17");
	web_custom_request("ProcessScript.do_17",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t50.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=wasPersonTabs=true&__o3id6=YN1&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=AnyManualIncomePage&__o3id4=16&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=AnyManualIncomePage&syncToken=16&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FhasManualIncome%22%2C%22Does%20{p_FN}%20have%20any%20income%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%"
		"24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id6&__o3synch={p_o3synch_16}",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_29_Income",2);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_30_Income_Details");

	web_reg_find("Text=Form 1040", "LAST" );
	
	web_reg_save_param("p_o3synch_18", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_30_Income_Details_{dp_UserID};PC=ProcessScript.do_18");
	web_custom_request("ProcessScript.do_18",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t51.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=wasPersonTabs=true&__o3id6=HCIT26001&__o3id7=TFT1&__o3id8=ABCD%20Inc&__o3id9=28000&__o3ida=&__o3idb=FC7&__o3idc=2012-04-10&__o3idd=&__o3ide=YN2&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=DCHXManualIncomePage&__o3id4=17&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=DCHXManualIncomePage&syncToken=17&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_MONEY%2FIncomeItem.amount%22%2C%22Amount%20(Before%20taxes%20and%20deductions)%22%2C%22IEG_MONEY%22%2Ctrue%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FIncomeItem.employer%22%2C%22What%20is%20the%20name%20of%20your%20Employer%3F%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FTAXFORM_TYPE%2FIncomeItem.taxform%22%2C%22Please%"
		"20indicate%20which%20tax%20form%20is%20used%20to%20report%20this%20income.%22%2C%22TAXFORM_TYPE%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FINCOME_TYPE%2FIncomeItem.incomeType%22%2C%22Income%20Type%22%2C%22INCOME_TYPE%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FAC"
		"TION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3ide%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FhasMoreManualIncome%22%2C%22Does%20{p_FN}%20have%20any%20more%20income%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FIncomeItem.endDate%22%2C%22End%20Date%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FIncomeItem.startDate%22%2C%22Start%20Date%22%2C%22IEG_DATE%22%2Ctrue%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FFREQUENCY_CODE%2FIncomeItem.frequency%22%2C%22Frequency%22%2C%22FREQUENCY_CODE%22%2Ctrue%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_MONEY%2FIncomeItem.taxExemptAmount%22%2C%22What%20portion%20of%20this%20amount%20is%20tax%20exempt%3F%22%2C%22IEG_MONEY%22%2Cfa"
		"lse%5D%7D&__o3fmeta_mandatory_data=__o3id9%2C__o3id6%2C__o3ide%2C__o3idc%2C__o3idb&__o3synch={p_o3synch_17}",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_30_Income_Details",2);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_31_Income_Adjustment");

	web_reg_find("Text=Adjustments",  "LAST" );	
	
	web_reg_save_param("p_o3synch_19", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_31_Income_Adjustment_{dp_UserID};PC=ProcessScript.do_19");
	web_custom_request("ProcessScript.do_19",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t52.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=wasPersonTabs=true&__o3id6=YN2&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=AnyIncomeDeductionPage&__o3id4=18&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=AnyIncomeDeductionPage&syncToken=18&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FanyDeductableItem%22%2C%22Does%20{p_FN}%20have%20any%20of%20the%20adjustments%20to%20income%20that%20are%20listed%20in%20Form%201040%2C%20lines%2"
		"023%20to%2035%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=&__o3synch={p_o3synch_18}",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_31_Income_Adjustment",2);

	lr_think_time(ithinktime);
	
	lr_start_transaction("11_MaleWithAPTC_32_Annual_Income");
	
	web_reg_save_param("p_o3synch_20", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_32_Annual_Income_{dp_UserID};PC=ProcessScript.do_20");
	web_custom_request("ProcessScript.do_20",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t53.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=wasPersonTabs=true&__o3id6=YN1&__o3id7=28%2C000.00&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=ProjectedAnnualIncomePage&__o3id4=19&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=ProjectedAnnualIncomePage&syncToken=19&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_MONEY%2FProjectedAnnualIncome.projectedIncome%22%2C%22What%20do%20you%20expect%20the%20annual%20income%20to%20be%20in%202015%3F%22%2C%22IEG_MONEY%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%2"
		"2%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FPerson.isAnnualIncomeCorrect%22%2C%22Is%20this%20what%20you%20expect%20{p_FN}'s%20annual%20income%20to%20be%20in%202015%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id6&__o3synch={p_o3synch_19}",
		"LAST");
	
	lr_end_transaction("11_MaleWithAPTC_32_Annual_Income",2);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_33_Additional_Info");
	
	web_reg_save_param("p_o3synch_21", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_33_Additional_Info_1_{dp_UserID};PC=ProcessScript.do_21");
	web_submit_data("ProcessScript.do_21",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t54.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__o3id0", "Value={executionID}", "ENDITEM",
		"Name=__o3id1", "Value=1048692", "ENDITEM",
		"Name=__o3id2", "Value=HealthCarePortal", "ENDITEM",
		"Name=__o3id3", "Value=AdditionalHouseholdBreaker", "ENDITEM",
		"Name=__o3id4", "Value=20", "ENDITEM",
		"Name=__o3id5", "Value=true", "ENDITEM",
		"Name=validate-save-and-exit", "Value=true", "ENDITEM",
		"Name=iegExecutionID", "Value={executionID}", "ENDITEM",
		"Name=scriptID", "Value=HealthCarePortal", "ENDITEM",
		"Name=pageID", "Value=AdditionalHouseholdBreaker", "ENDITEM",
		"Name=syncToken", "Value=20", "ENDITEM",
		"Name=iegScriptVersion", "Value=V1", "ENDITEM",
		"Name=iegScriptType", "Value=Portal", "ENDITEM",
		"Name=forwardParams", "Value=&id={id}", "ENDITEM",
		"Name=o3ctx", "Value=1048692", "ENDITEM",
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", "ENDITEM",
		"Name=__o3fmeta_mandatory_data", "Value=", "ENDITEM",
		"Name=__o3synch", "Value={p_o3synch_20}", "ENDITEM",
		"LAST");
	
	web_reg_save_param("p_o3synch_22", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_33_Additional_Info_2_{dp_UserID};PC=ProcessScript.do_22");
	web_submit_data("ProcessScript.do_22",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t55.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__o3id0", "Value={executionID}", "ENDITEM",
		"Name=__o3id1", "Value=1048692", "ENDITEM",
		"Name=__o3id2", "Value=HealthCarePortal", "ENDITEM",
		"Name=__o3id3", "Value=AdditionalIAInfromationPage", "ENDITEM",
		"Name=__o3id4", "Value=21", "ENDITEM",
		"Name=__o3id5", "Value=true", "ENDITEM",
		"Name=validate-save-and-exit", "Value=true", "ENDITEM",
		"Name=iegExecutionID", "Value={executionID}", "ENDITEM",
		"Name=scriptID", "Value=HealthCarePortal", "ENDITEM",
		"Name=pageID", "Value=AdditionalIAInfromationPage", "ENDITEM",
		"Name=syncToken", "Value=21", "ENDITEM",
		"Name=iegScriptVersion", "Value=V1", "ENDITEM",
		"Name=iegScriptType", "Value=Portal", "ENDITEM",
		"Name=forwardParams", "Value=&id={id}", "ENDITEM",
		"Name=o3ctx", "Value=1048692", "ENDITEM",
		"Name=__o3fmeta", "Value={\"__o3id7\":[\"/data/si/ACTION/answers$currentPageAnswers/ans/IEG_BOOLEAN/Person.isEnrolledOrEligibleForESC.0\",\"\",\"IEG_BOOLEAN\",false],\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id6\":[\"/data/si/ACTION/answers$currentPageAnswers/ans/IEG_BOOLEAN/Person.isIncarcerated.0\",\"\",\"IEG_BOOLEAN\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", "ENDITEM",
		"Name=__o3fmeta_mandatory_data", "Value=", "ENDITEM",
		"Name=__o3synch", "Value={p_o3synch_21}", "ENDITEM",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_33_Additional_Info",2);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_34_Disabilities");
	
	web_reg_save_param("p_o3synch_23", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_34_Disabilities_{dp_UserID};PC=ProcessScript.do_23");
	web_custom_request("ProcessScript.do_23",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t56.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3id8=YN2&__o3ida=YN2&__o3idc=YN2&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=AdditionalInfoForAllPage&__o3id4=22&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=AdditionalInfoForAllPage&syncToken=22&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.isBlind.0%22%2C%22%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FanyoneBlind%22%2C%22Is%20anyone%20in%20the%20Application%20Group%20blind%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.haveMedicalBill.0%22%2C%22%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2"
		"C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FanyoneHasUnpaidMedicalBills%22%2C%22Does%20anyone%20in%20the%20household%20need%20help%20paying%20for%20medical%20bills%20from%20the%20last%203%20months%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%"
		"22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.hasLongTermCare.0%22%2C%22%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FlongTermCare%22%2C%22Does%20anyone%20in%20the%20Application%20Group%20need%20help%20with%20activities%20of%20daily%20living%20(i.e.%20bathing%2C%20eating)%20through%20home%20health%20services%2C%20a%20nursing%20home%2C%20or%20other%20medical%20facility%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FPerson.isDisabled.0%22%2C%22%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FanyoneDisabled%22%2C%22Is%20anyone%20in%20the%20Application%20Group%20disabled%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%7D&__o3fmeta_mandatory_data=__o3id8%2C__o3idc%2C__o3ida&__o3synch={p_o3synch_22}",
		"LAST");
	
	lr_end_transaction("11_MaleWithAPTC_34_Disabilities",2);

	lr_think_time(ithinktime);
	
	return 0;
}
# 12 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "SpecialEnrollmentReuqest.c" 1
SpecialEnrollmentReuqest()
{
	lr_start_transaction("11_MaleWithAPTC_35_Special_Enrollment");
	
	web_reg_find("Text/IC=Are you a broker submitting this application", "LAST" );
	
	web_reg_save_param("p_o3synch_24", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_35_Special_Enrollment_{dp_UserID};PC=ProcessScript.do_24");

	web_custom_request("ProcessScript.do_24",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t57.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3id7=&__o3id8=&__o3id9=&__o3ida=&__o3idb=&__o3idc=YN2&__o3idd=&__o3ide=YN2&__o3idf=&__o3id10=YN2&__o3id11=&__o3id12=YN2&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=SpecialEnrollmentRequestDetails1&__o3id4=23&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=SpecialEnrollmentRequestDetails1&syncToken=23&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.childAddDate%22%2C%22When%20did%20this%20child%20join%20your%20household%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_NEWCHILD_REASON%2FSpecialEnrollmentEntity.childAddReason%22%2C%22Please%20choose%20the%20reason%20this%20child%20is%20being%20added%20to%20your%20household%22%2C%22IEG_NEWCHILD_REASON%22%2Cfalse%5D%2C%22__o3id7"
		"%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_NEWMEMBER%2FSpecialEnrollmentEntity.addedMemberType%22%2C%22Who%20was%20added%20to%20your%20household%3F%22%2C%22IEG_NEWMEMBER%22%2Cfalse%5D%2C%22__o3id10%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.movedToDC%22%2C%22Have%20you%20or%20anyone%20in%20your%20tax%20household%20recently%20moved%20to%20the%20District%20of%20Columbia%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id11%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.movedToDCDate%22%2C%22What%20was%20the%20date%20of%20the%20move%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2F"
		"data%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.memberAdded%22%2C%22Have%20you%20recently%20added%20a%20member%20to%20your%20household%20(for%20example%2C%20you%20had%20a%20baby%2C%20got%20married%2C%20or%20formed%20a%20domestic%20partnership)%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3idf%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.divorcedTermina"
		"tedDate%22%2C%22When%20the%20divorce%20or%20termination%20of%20the%20domestic%20partnership%20was%20finalized%20(i.e.%20effective%20date)%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3ide%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.divorcedTerminated%22%2C%22Have%20you%20or%20anyone%20in%20your%20tax%20household%20recently%20gotten%20divorced%20or%20terminated%20a%20domestic%20partnership%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.lostInsuranceDate%22%2C%22What%20was%20the%20last%20date%20of%20coverage%20under%20your%20other%20health%20insurance%2C%20or%20what%20will%20be%20the%20last%20date%20of%20coverage%20under%20your%20other%20health%20insurance%3F%20%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.lostInsurance%22%2C%22Have%20"
		"you%20or%20anyone%20in%20your%20tax%20household%20recently%20lost%20other%20health%20insurance%20coverage%20or%20expect%20to%20lose%20other%20health%20insurance%20coverage%20soon%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.memberAddDate%22%2C%22When%20did%20this%20person%20join%20your%20household%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_COVERAGE_START%2FSpecialEnrollmentEntity.childAddCoverageStart%22%2C%22If%20you%20are%20eligible%20for%20a%20special%20enrollment%20period%2C%20do%20you%20wan%20the%20coverage%20you%20select%20to%20begin%20(pick%20one)%3A%22%2C%22IEG_COVERAGE_START%22%2Cfalse%5D%2C%22__o3id12%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.healthInsuranceTaxPenalty%22%2C%22Did%20you%20or%20anyone%20in%20your%20tax%20household%20either%20(1)%"
		"20have%20to%20pay%20a%20penalty%20on%20your%202014%20taxes%20for%20going%20without%20health%20insurance%2C%20or%20(2)%20file%20your%202014%20taxes%20after%20February%2015%2C%202015%20and%20were%20unaware%20of%20the%20tax%20penalty%20for%20going%20without%20health%20insurance%20until%20you%20filed%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id9%2C__o3id8%2C__o3id7%2C__o3id11%2C__o3idf%2C__o3idd%2C__o3idb%2C__o3ida&__o3synch={p_o3synch_23}",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_35_Special_Enrollment",2);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_36_Special_Enrollment_2");

	web_reg_find("Text/IC=If you are not registered to vote or ",   "LAST" );
	
	web_reg_save_param("p_o3synch_25", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	 

	addDynaTraceHeader("NA=11_MaleWithAPTC_36_Special_Enrollment_2_{dp_UserID};PC=ProcessScript.do_25");
	web_custom_request("ProcessScript.do_25",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t58.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3id7=&__o3id8=YN2&__o3id9=YN2&__o3ida=YN2&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=SpecialEnrollmentRequestDetails2&__o3id4=24&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=SpecialEnrollmentRequestDetails2&syncToken=24&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.enrolledReason2%22%2C%22Do%20you%20believe%20you%20or%20any%20member%20of%20your%20tax%20household%20were%20enrolled%20in%20a%20DC%20Health%20Link%20plan%20or%20not%20enrolled%20in%20a%20DC%20Health%20Link%20plan%20due%20to%20an%20error%2C%20misrepresentation%2C%20or%20inaction%20made%20by%20someone%20working%20for%20a%20health%20insurance%20plan%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2"
		"FSpecialEnrollmentEntity.enrolledReason1%22%2C%22Do%20you%20believe%20you%20or%20any%20member%20of%20your%20tax%20household%20were%20enrolled%20in%20a%20DC%20Health%20Link%20plan%20or%20not%20enrolled%20in%20a%20DC%20Health%20Link%20plan%20due%20to%20an%20error%2C%20misrepresentation%2C%20or%20inaction%20made%20by%20someone%20working%20for%20DC%20Health%20Link%20or%20the%20United%20States%20Department%20of%20Health%20and%20Human%20Services%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.changeCitizenshipDate%22%2C%22What%20was%20the%20date%20of%20the%20change%20in%20citizenship%20or%20immigration%20status%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.enrolledReason3%22%2C%22Do%20you%20believe%20you%20or%20any%20member%20of%20your%20tax%20household%20were%20not%20enrolled%20in%20a%20plan%2C%20w"
		"ere%20enrolled%20in%20the%20wrong%20plan%2C%20or%20were%20eligible%20for%20but%20did%20not%20receive%20financial%20assistance%20because%20of%20misconduct%20of%20someone%20assisting%20you%20with%20DC%20Health%20Link%2C%20such%20as%20a%20broker%2C%20assister%2C%20or%20certified%20application%20counselor%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.changeCitizenship%22%2C%22Have%20you%20or%20anyone%20in%20your%20tax%20household%20recently%20experienced%20a%20change%20in%20citizenship%20or%20immigrat"
		"ion%20status%3F%20(NOTE%3A%20Renewing%20a%20visa%20or%20changing%20from%20one%20eligible%20immigration%20status%20to%20another%20without%20gaining%20citizenship%20is%20NOT%20a%20change)%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id7&__o3synch={p_o3synch_24}",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_36_Special_Enrollment_2",2);
	
	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_37_Special_Enrollment_3");

	web_reg_find("Text/IC=Items which require",  "LAST" );
	
	web_reg_save_param("p_o3synch_26", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	 

	addDynaTraceHeader("NA=11_MaleWithAPTC_37_Special_Enrollment_3_{dp_UserID};PC=ProcessScript.do_26");
	web_custom_request("ProcessScript.do_26",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t59.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3id7=YN2&__o3id8=YN2&__o3id9=&__o3ida=YN2&__o3idb=&__o3idc=YN2&__o3idd=&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=SpecialEnrollmentRequestDetails3&__o3id4=25&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=SpecialEnrollmentRequestDetails3&syncToken=25&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.memberInServiceDate%22%2C%22When%20did%20this%20service%20start%20or%20end%3F%20Please%20provide%20the%20date%20for%20whichever%20was%20most%20recent%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.memberInService%22%2C%22Are%20you%20or%20anyone%20in%20your%20tax%20household%20an%20AmeriCorps%20State%20and%20National%2C%20VISTA%2C%20or%20NCCC%20vo"
		"lunteer%20beginning%20or%20ending%20your%20service%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.domesticViolence%22%2C%22Have%20you%20or%20anyone%20in%20your%20household%20recently%20experienced%20domestic%20violence%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.planViolated%22%2C%22Are%20you%20or%20anyone%20in%20your%20tax%20household%20currently%20enrolled%20in%20a%20DC%20Health%20Lin"
		"k%20plan%20and%20believe%20your%20plan%20violated%20its%20contract%20with%20you%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.naturalDisasterDate%22%2C%22When%20did%20this%20natural%20disaster%20occur%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.naturalDisaster%22%2C%22Did%20a%20natural%20disaster%20during%20the%20open%20enrollment%20period%20or%20a%20special%20enrollment%20per"
		"iod%20prevent%20you%20or%20anyone%20in%20your%20tax%20household%20from%20enrolling%20in%20a%20plan%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.receivedCourtOrderDate%22%2C%22What%20was%20the%20date%20of%20this%20court%20order%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.receivedCourtOrder%22%2C%22Have%20you%20or%20anyone%20in%20your%20tax%20household%20recently%20received%20a%20court%20order%20to%20provide%20health%20insurance%20coverage%20for%20someone%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id9%2C__o3idd%2C__o3idb&__o3synch={p_o3synch_25}",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_37_Special_Enrollment_3",2);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_38_Special_Enrollment_4");
	
	web_reg_save_param("p_o3synch_27", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");
	web_reg_save_param("p_o3synch_28", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	 

	addDynaTraceHeader("NA=11_MaleWithAPTC_000_Special_Enrollment_4_{dp_UserID};PC=ProcessScript.do_27");
	web_custom_request("ProcessScript.do_27",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t60.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3id7=&__o3id8=YN2&__o3id9=&__o3ida=YN2&__o3idb=&__o3idc=YN2&__o3idd=&__o3ide=YN2&__o3idf=&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=SpecialEnrollmentRequestDetails4&__o3id4=26&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=SpecialEnrollmentRequestDetails4&syncToken=26&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.websiteOutageDate%22%2C%22When%20did%20this%20outage%20occur%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.websiteOutage%22%2C%22Did%20a%20DC%20Health%20Link%20website%20outage%20during%20open%20enrollment%20or%20a%20special%20enrollment%20period%20prevent%20you%20or%20anyone%20in%20your%20tax%20household%20from%20enrolling%"
		"20in%20a%20plan%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.medicalEmergencyDate%22%2C%22When%20did%20this%20medical%20emergency%20occur%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.medicalEmergency%22%2C%22Did%20a%20medical%20emergency%20experienced%20during%20open%20enrollment%20or%20a%20special%20enrollment%20period%20prevent%20you%20or%20anyone%20in%20your%20tax%20household%20from%20e"
		"nrolling%20in%20a%20plan%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3idf%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.premiumFailedDate%22%2C%22What%20was%20the%20last%20date%20COBRA%20was%20effective%2C%20or%20what%20is%20the%20last%20date%20COBRA%20will%20coverage%20be%20effective%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3ide%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.premiumFailed%22%2C%22Have%20you%20or%20anyone%20in%20your%20tax%20household%20had%20your%20COBRA%"
		"20terminated%20because%20a%20former%20failed%20to%20submit%20your%20premium%20payments%20in%20time%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_DATE%2FSpecialEnrollmentEntity.dependentOnMedicareEligibleDate%22%2C%22What%20was%20the%20last%20date%20you%20had%20coverage%20from%20this%20employer%2C%20or%20what%20is%20the%20last%20date%20you%20will%20have%20coverage%20from%20this%20employer%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.dependentOnMedicareEligible%22%2C%22Are%20you%20or%20anyone%20in%20your%20tax%20household%20the%20dependent%20of%20someone%20who%20is%20becoming%20eligible%20for%20Medicare%20and%20will%20no%20longer%20be%20able%20to%20provide%20you%20with%20coverage%20through%20their%20employer%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fa"
		"ns%2FIEG_DATE%2FSpecialEnrollmentEntity.lostEligibilityForExemptionDate%22%2C%22When%20did%20your%20exemption%20end%20or%20when%20will%20it%20end%3F%22%2C%22IEG_DATE%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSpecialEnrollmentEntity.lostEligibilityForExemption%22%2C%22Did%20you%20or%20anyone%20in%20your%20tax%20household%20previously%20have%20an%20exemption%20from%20the%20individual%20responsibility%20payment%20and%20have%20lost%20or%20are%20losing%20eligibility%20for%20the%20exemption%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id9%2C__o3id7%2C__o3idf%2C__o3idd%2C__o3idb&__o3synch={p_o3synch_26}",
		"LAST");
	
	lr_end_transaction("11_MaleWithAPTC_38_Special_Enrollment_4",2);

	lr_think_time(ithinktime);
 
# 148 "SpecialEnrollmentReuqest.c"
	
	return 0;
}
# 13 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "Summary.c" 1
Summary()
{
	lr_start_transaction("11_MaleWithAPTC_40_Summary");
	
	web_reg_find("Text=Applicant",  "LAST" );
	
	web_reg_save_param("p_o3synch_29", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_40_Summary_{dp_UserID};PC=ProcessScript.do_29");

 
# 41 "Summary.c"
	
	  web_submit_data("ProcessScript.do_47",
        "Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
        "Method=POST",
        "RecContentType=text/html",
        "Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
        "Snapshot=t115.inf",
        "Mode=HTML",
        "ITEMDATA",
        "Name=__o3id0", "Value={executionID}", "ENDITEM",
        "Name=__o3id1", "Value=1048692", "ENDITEM",
        "Name=__o3id2", "Value=HealthCarePortal", "ENDITEM",
        "Name=__o3id3", "Value=VerificationSummary", "ENDITEM",
        "Name=__o3id4", "Value=45", "ENDITEM",
        "Name=__o3id5", "Value=true", "ENDITEM",
        "Name=validate-save-and-exit", "Value=true", "ENDITEM",
        "Name=iegExecutionID", "Value={executionID}", "ENDITEM",
        "Name=scriptID", "Value=HealthCarePortal", "ENDITEM",
        "Name=pageID", "Value=VerificationSummary", "ENDITEM",
        "Name=syncToken", "Value=45", "ENDITEM",
        "Name=iegScriptVersion", "Value=V1", "ENDITEM",
        "Name=iegScriptType", "Value=Portal", "ENDITEM",
        "Name=forwardParams", "Value=&id={id}", "ENDITEM",
        "Name=o3ctx", "Value=1048692", "ENDITEM",
        "Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", "ENDITEM",
        "Name=__o3fmeta_mandatory_data", "Value=", "ENDITEM",
        "Name=__o3synch", "Value={p_o3synch_28}", "ENDITEM",
        "LAST");


	
	lr_end_transaction("11_MaleWithAPTC_40_Summary",2);

	lr_think_time(ithinktime);

	lr_start_transaction("11_MaleWithAPTC_41_Broker_Info");
	
	web_reg_find("Text=Name", "LAST" );
	
	web_reg_save_param("p_o3synch_30", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	 

	addDynaTraceHeader("NA=11_MaleWithAPTC_41_Broker_Info_{dp_UserID};PC=ProcessScript.do_30");
	web_custom_request("ProcessScript.do_30",
		"URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t63.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=__o3id6=YN2&__o3id7=&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=BrokerDetailsPage&__o3id4=29&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=BrokerDetailsPage&syncToken=29&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FApplication.taxID%22%2C%22Tax%20ID%20number%20for%20GA%2FTPA(if%20applicable)%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswe"
		"rs%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FApplication.isBrokerApplyingOnBehalf%22%2C%22Are%20you%20a%20broker%20submitting%20this%20application%20on%20behalf%20of%20someone%20else%3F%22%2C%22IEG_YES_NO%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id6&__o3synch={p_o3synch_29}",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_41_Broker_Info",2);
	
	lr_think_time(ithinktime);
	
	lr_start_transaction("11_MaleWithAPTC_42_Documentation");

	web_reg_find("Text=Summary",  "LAST" );
	
	web_reg_save_param("p_o3synch_31", "LB=__o3synch\" type=\"hidden\" value=\"", "RB=\"/>", "NotFound=Error", "Search=ALL", "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_42_Documentation_{dp_UserID};PC=ProcessScript.do_31");
	web_submit_data("ProcessScript.do_31",
		"Action=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
		"Snapshot=t64.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=__o3id0", "Value={executionID}", "ENDITEM",
		"Name=__o3id1", "Value=1048692", "ENDITEM",
		"Name=__o3id2", "Value=HealthCarePortal", "ENDITEM",
		"Name=__o3id3", "Value=VerificationSummary", "ENDITEM",
		"Name=__o3id4", "Value=30", "ENDITEM",
		"Name=__o3id5", "Value=true", "ENDITEM",
		"Name=validate-save-and-exit", "Value=true", "ENDITEM",
		"Name=iegExecutionID", "Value={executionID}", "ENDITEM",
		"Name=scriptID", "Value=HealthCarePortal", "ENDITEM",
		"Name=pageID", "Value=VerificationSummary", "ENDITEM",
		"Name=syncToken", "Value=30", "ENDITEM",
		"Name=iegScriptVersion", "Value=V1", "ENDITEM",
		"Name=iegScriptType", "Value=Portal", "ENDITEM",
		"Name=forwardParams", "Value=&id={id}", "ENDITEM",
		"Name=o3ctx", "Value=1048692", "ENDITEM",
		"Name=__o3fmeta", "Value={\"__o3id2\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/scriptID\",\"\",\"IEG_ANSWERS\",false],\"__o3id1\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/o3ctx\",\"\",\"IEG_ANSWERS\",false],\"__o3id0\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/executionID\",\"\",\"IEG_ANSWERS\",false],\"__o3id5\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/validate-save-and-exit\",\"\",\"IEG_ANSWERS\",false],\"__o3id4\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/syncToken\",\"\",\"IEG_ANSWERS\",false],\"__o3id3\":[\"/data/si/ACTION/answers$currentPageAnswers/hf/pageID\",\"\",\"IEG_ANSWERS\",false]}", "ENDITEM",
		"Name=__o3fmeta_mandatory_data", "Value=", "ENDITEM",
		"Name=__o3synch", "Value={p_o3synch_30}", "ENDITEM",
		"LAST");

	lr_end_transaction("11_MaleWithAPTC_42_Documentation",2);
	
	lr_think_time(ithinktime);
	
	return 0;
}
# 14 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "SubmitApplication.c" 1
SubmitApplication()
{
 
 
 
 
 
	
	lr_start_transaction("11_MaleWithAPTC_43_Submit_Application");

	addDynaTraceHeader("NA=11_MaleWithAPTC_43_Submit_Application_1_{dp_UserID};PC=ProcessScript.do_32");
	web_custom_request("ProcessScript.do_32",
	                   "URL=https://{p_Webapp_URL}/CitizenPortal/ieg/ProcessScript.do?executionID={executionID}",
	                   "Method=POST",
	                   "TargetFrame=",
	                   "Resource=1",
	                   "Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
	                   "Snapshot=t65.inf",
	                   "EncType=application/x-www-form-urlencoded; charset=UTF-8",
	                   "Body=__o3id6=true&__o3id7=true&__o3id8=RP5&__o3id9=true&__o3ida=YN2&__o3idb=true&__o3idc=true&__o3idd=true&__o3ide={p_FN}&__o3idf=&__o3id10={p_LN}&__o3id0={executionID}&__o3id1=1048692&__o3id2=HealthCarePortal&__o3id3=SignaturePage&__o3id4=31&__o3id5=true&validate-save-and-exit=true&iegExecutionID={executionID}&scriptID=HealthCarePortal&pageID=SignaturePage&syncToken=31&iegScriptVersion=V1&iegScriptType=Portal&forwardParams=%26id%3D{id}&o3ctx=1048692&__o3fmeta=%7B%22__o3id9%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FSubmission.authorizeMemberInd%22%2C%22I%20agree%22%2C%22IEG_BOOLEAN%22%2Ctrue%5D%2C%22__o3id8%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FRENEWAL_PERIOD%2FSubmission.renewalPeriod%22%2C%22Renewal%20Years%22%2C%22IEG_CT_RADIO%22%2Ctrue%5D%2C%22__o3id7%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FSubmission.reportMyChangesInd%22%2C%22I%20agree%22%2C%22IEG_BOOLEAN%22%2Ctrue%5D%2C%22__o3id10%"
	                   "22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FSubmission.sigLastName%22%2C%22Last%20Name%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3id2%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FscriptID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id1%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fo3ctx%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id0%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FexecutionID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id6%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FSubmission.absentParentESignatureInd%22%2C%22I%20agree%22%2C%22IEG_BOOLEAN%22%2Ctrue%5D%2C%22__o3id5%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2Fvalidate-save-and-exit%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3id4%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FsyncToken%22%2C%22%22%2C%22IEG_AN"
	                   "SWERS%22%2Cfalse%5D%2C%22__o3id3%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fhf%2FpageID%22%2C%22%22%2C%22IEG_ANSWERS%22%2Cfalse%5D%2C%22__o3idf%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FSubmission.middleInitial%22%2C%22Middle%20Name%22%2C%22IEG_STRING%22%2Cfalse%5D%2C%22__o3ide%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_STRING%2FSubmission.sigFirstName%22%2C%22First%20Name%22%2C%22IEG_STRING%22%2Ctrue%5D%2C%22__o3idd%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FSubmission.prejuryESignatureInd%22%2C%22I%20agree%22%2C%22IEG_BOOLEAN%22%2Ctrue%5D%2C%22__o3idc%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FSubmission.informationChangedESignatureInd%22%2C%22I%20agree%22%2C%22IEG_BOOLEAN%22%2Ctrue%5D%2C%22__o3idb%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_BOOLEAN%2FSubmission.otherParentChildSupportInd%22%"
	                   "2C%22I%20agree%22%2C%22IEG_BOOLEAN%22%2Cfalse%5D%2C%22__o3ida%22%3A%5B%22%2Fdata%2Fsi%2FACTION%2Fanswers%24currentPageAnswers%2Fans%2FIEG_YES_NO%2FSubmission.anyParentLivingOut%22%2C%22Does%20any%20child%20on%20this%20application%20have%20a%20parent%20living%20outside%20of%20the%20home%3F%22%2C%22IEG_YES_NO%22%2Cfalse%5D%7D&__o3fmeta_mandatory_data=__o3id9%2C__o3id8%2C__o3id7%2C__o3id10%2C__o3id6%2C__o3ide%2C__o3idd%2C__o3idc&__o3synch={p_o3synch_31}",
	                   "LAST");

	web_reg_save_param_ex(
		"ParamName=CorrelationParameter",
		"LB=intakeApplicationID=",
		"RB=&motivationID",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/FinishMotivation.jspx*",
		"LAST");

	web_reg_save_param_ex(
		"ParamName=motivationID",
		"LB=motivationID=",
		"RB=&categoryID",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/FinishMotivation.jspx*",
		"LAST");
	
 

	addDynaTraceHeader("NA=11_MaleWithAPTC_43_Submit_Application_2_{dp_UserID};PC=FinishMotivation.jspx");
	web_url("FinishMotivation.jspx",
	        "URL=https://{p_Webapp_URL}/CitizenPortal/cw/FinishMotivation.jspx?executionID={executionID}&id={id}&__u=c8f&o3ctx=1048692",
	        "TargetFrame=",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=https://{p_Webapp_URL}/CitizenPortal/ieg/Screening.do?executionID={executionID}&id={id}&o3ctx=1048688",
	        "Snapshot=t66.inf",
	        "Mode=HTML",
	        "LAST");
	
	lr_end_transaction("11_MaleWithAPTC_43_Submit_Application",2);


 
	 
	 
	 
	 
 
 
	 
 
	 

	lr_think_time(ithinktime);
	
	return 0;
}
# 15 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "ShowEligibility.c" 1
ShowEligibility()
{
	lr_start_transaction("11_MaleWithAPTC_44_Show_Eligibility");
	
	web_submit_form("WaitDeferredProgressAction.do",
	                "Snapshot=t118.inf",
	                "ITEMDATA",
	                "LAST");

	lr_think_time(10);

	web_link("SHOW ELIGIBILITY RESULTS",
	         "Text=SHOW ELIGIBILITY RESULTS",
	         "Snapshot=t119.inf",
	         "LAST");


	addDynaTraceHeader("NA=11_MaleWithAPTC_44_Show_Eligibility_1_{dp_UserID};PC=SHOW ELIGIBILITY RESULTS");
	web_url("SHOW ELIGIBILITY RESULTS",
	        "URL=https://{p_Webapp_URL}/CitizenPortal/en_US/HealthCare_resolveEligibilityPage.do?motivationID={motivationID}&o3ctx=112&__o3rpu=HealthCare_submitApplicationResponsePage.do%3FcategoryID%3Dnull%26intakeApplicationID%3D{CorrelationParameter}%26motivationID%3D{motivationID}",
	        "TargetFrame=",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/HealthCare_submitApplicationResponsePage.do?intakeApplicationID={CorrelationParameter}&motivationID={motivationID}&categoryID=null",
	        "Snapshot=t67.inf",
	        "Mode=HTML",
	        "LAST");

	addDynaTraceHeader("NA=11_MaleWithAPTC_44_Show_Eligibility_2_{dp_UserID};PC=application.do_3");
	web_url("application.do_3",
	        "URL=https://{p_Webapp_URL}/CitizenPortal/application.do",
	        "TargetFrame=",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=https://{p_Webapp_URL}/CitizenPortal/userhome.jsp",
	        "Snapshot=t68.inf",
	        "Mode=HTML",
	        "LAST");
	
	lr_end_transaction("11_MaleWithAPTC_44_Show_Eligibility",2);

	lr_think_time(ithinktime);
	
	return 0;
}
# 16 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "Logout_Curam.c" 1
Logout_Curam()
{
	lr_start_transaction("0998_Logout_Curam");
	
	addDynaTraceHeader("NA=0998_Logout_Curam{dp_UserID};PC=UIMIFrameWrapperPage.do_2");
	web_custom_request("UIMIFrameWrapperPage.do_2",
		"URL=https://{p_Webapp_URL}/CitizenPortal/en_US/UIMIFrameWrapperPage.do?uimPageID=LogoutWrapper&o3ctx={o3ctx}&dojo.preventCache=1443210495845",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do",
		"Snapshot=t29.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded",
		"LAST");
	
	lr_end_transaction("0998_Logout_Curam", 2);
	
	lr_think_time(10);
		
	lr_start_transaction("0999_Logout_Curam");
	addDynaTraceHeader("NA=0999_Logout_Curam;PC=logout.jsp");
	web_url("logout.jsp",
		"URL=https://{p_Webapp_URL}/CitizenPortal/logout.jsp?end_url=https://{p_IA_URL}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/LogoutWrapperPage.do?o3ctx={o3ctx}&dojo.preventCache=1443210495845",
		"Snapshot=t30.inf",
		"Mode=HTML",
		"LAST");
	
	lr_end_transaction("0999_Logout_Curam", 2);
	
	lr_think_time(14);
	
	lr_start_transaction("1000_Last_Logout");
	
	addDynaTraceHeader("NA=1000_Last_Logout;PC=logout");
	web_submit_form("logout", 
		"Snapshot=t31.inf", 
		"ITEMDATA", 
		"LAST");
	lr_end_transaction("1000_Last_Logout", 2);
	
	lr_think_time(14);
	
	return 0;
}
# 17 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "DataCreation.c" 1
GenerateSSNs()
{
	SSNGenerator("Assisted_SSN");
	
		lr_output_message(lr_eval_string("{Assisted_SSN}"));
	return 0;
}

SSNGenerator(char* param_name, char* ssnNoSpace)
{
	int randSSN[3];
	char EmployeeDep1SSN[100];
	char EmployeeDep1SSN_1[100];
	char p_SSN_1[100];
	
	randSSN[0] = RandomRange(100,999);
	randSSN[1] = RandomRange(10,99);
	randSSN[2] = RandomRange(1000,9999);
	
	lr_save_int(randSSN[0],"pSSN1dep1_1");
	lr_save_int(randSSN[1],"pSSN2dep1_1");
	lr_save_int(randSSN[2],"pSSN3dep1_1");

	sprintf(EmployeeDep1SSN, "%s-%s-%s", lr_eval_string("{pSSN1dep1_1}"), lr_eval_string("{pSSN2dep1_1}"), lr_eval_string("{pSSN3dep1_1}"));
	sprintf(EmployeeDep1SSN_1, "%s%s%s", lr_eval_string("{pSSN1dep1_1}"), lr_eval_string("{pSSN2dep1_1}"), lr_eval_string("{pSSN3dep1_1}"));
	
	lr_save_string(EmployeeDep1SSN, "EmployeeDep1SSN");
	
	lr_save_string(EmployeeDep1SSN, param_name);
	lr_save_string(EmployeeDep1SSN_1, ssnNoSpace);
	
  return 0;
}

RandomRange(int lower,int upper)
{
	return (rand()%(upper-lower+1))+lower;
	
}

random_alpha(char* param_name, int length) {
	char buff[32] = "";
  int r,i;
  char c;
  srand((unsigned int)_time32(0));  
  for (i = 0; i < length; i++) {
	 
        
	r = rand() % 26 + 97;  
    c = (char)r;
		buff[i] = c;
    printf("%c", c);
  }
	lr_save_string(buff, param_name);
  return 0;
}

HTMLEncoder(char* param_name){
	
 
	lr_save_string(param_name, "InputParam");
	
	web_convert_param("InputParam", "SourceEncoding=HTML",
            "TargetEncoding=PLAIN", "LAST");

	lr_output_message("%s", lr_eval_string("{InputParam}"));

 
	
 
	return 0;
	
}
# 18 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 19 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedindividualassisted\\\\combined_IntegratedIndividualAssisted.c" 2

