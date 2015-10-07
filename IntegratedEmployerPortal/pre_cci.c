# 1 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c"
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







 
 

















# 1 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

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

 
 
 

                               


 
 
 





















# 2 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

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

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_ajax.h" 1
 














  int
	ajax_slider(
		const char *		mpszStepName,
		...);

  int
	ajax_accordion(
		const char *		mpszStepName,
		...);

  int
	ajax_reorderlist(
		const char *		mpszStepName,
		...);


  int
	ajax_rating(
		const char *		mpszStepName,
		...);

  int
	ajax_collapsiblepanel(
		const char *		mpszStepName,
		...);

  int
	ajax_tabs(
		const char *		mpszStepName,
		...);

  int
	ajax_autocomplete(
		const char *		mpszStepName,
		...);





 
 
 





# 9 "globals.h" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/modal_dialog_callbacks.h" 1





# 10 "globals.h" 2

# 1 "randomname.h" 1
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

SSNGenerator(char* param_name)
{
	int randSSN[3];
	char EmployeeDep1SSN[100];
	
	randSSN[0] = RandomRange(100,999);
	randSSN[1] = RandomRange(10,99);
	randSSN[2] = RandomRange(1000,9999);
	
	lr_save_int(randSSN[0],"pSSN1dep1_1");
	lr_save_int(randSSN[1],"pSSN2dep1_1");
	lr_save_int(randSSN[2],"pSSN3dep1_1");

	sprintf(EmployeeDep1SSN, "%s-%s-%s", lr_eval_string("{pSSN1dep1_1}"), lr_eval_string("{pSSN2dep1_1}"), lr_eval_string("{pSSN3dep1_1}"));
	lr_save_string(EmployeeDep1SSN, "EmployeeDep1SSN");
	 
	lr_save_string(EmployeeDep1SSN, param_name);
  return 0;
	
	
}
	
# 11 "globals.h" 2


 
 


# 3 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "vuser_init.c" 1
 







vuser_init()
{
	
int pEmpCount;
int OEEndOnOffset, OEStartOnOffset, PYEndOnOffset, PYStartOnOffset;
int fileGroup;
char  GeneratedEmpFileName[64];

srand(atof(lr_eval_string("{MillisSeed}"))*atof(lr_eval_string("VUserID")));
	
fileGroup = (atoi(lr_eval_string("{VUserID}")))/1;

sprintf(GeneratedEmpFileName,"C:\\Enroll_App\\Data_Folder\\EmpFName_%d.dat",fileGroup);
 

lr_save_string(GeneratedEmpFileName, "EmpFileName");

CreateFiles();

 
# 70 "vuser_init.c"
 
# 89 "vuser_init.c"
 return 0;
}

 
 
 
 
DaysUntilDate(int YearOffSet, int MonthOffSet, int DayWanted, int lastOf){
	int Year=0, Month=0, Day=0, YearWanted=10, MonthWanted=0;
	int iDays = 0;

     lr_save_datetime("%Y %m %d", 0 +86400*iDays, "pTempDate");
     sscanf(lr_eval_string("{pTempDate}"), "%d %d %d", &Year, &Month, &Day);
     
     MonthWanted = (Month + MonthOffSet)%12;
     YearWanted = (Year + YearOffSet);
     
     if (MonthOffSet > 12){
     	YearOffSet += MonthOffSet/12;
     	MonthOffSet %= 12;
     }
     
     if (MonthWanted < Month){
     	YearOffSet++;
     }

     if (lastOf !=0){
     	MonthWanted++;
     	DayWanted = 1;
     }

	while (Year != YearWanted || Month != MonthWanted || Day != DayWanted) {
    	lr_save_datetime("%Y %m %d", 0 +86400*iDays, "pTempDate");
    	sscanf(lr_eval_string("{pTempDate}"), "%d %d %d", &Year, &Month, &Day);
    	iDays++;
     }

     if (lastOf != 0){
     	return iDays-2;
     }
     
	return iDays-1;
}

buffer()
{
  web_set_max_html_param_len("2097152"); 
  web_reg_save_param("buffer","LB=","RB=","Search=Body","LAST");
  return 0;
}
# 4 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "ScriptFlow.c" 1
ScriptFlow()
{
	int i;
	
	 
	
	EmployeeRosterSizeCalculator();
 
 
 
 
 
 
 
 
 
 
	
 
	
	lr_think_time(10);
	
	EnrollAppLandingPage();  
	
	lr_think_time(10);

	EmployerTab();  
	
	lr_think_time(10);
	
	EmployerCreateAccount();  
	
	lr_think_time(10);
	
	lr_save_int(RandomRange(3,8),"LegalName");

	random_alpha("LegalName",atoi(lr_eval_string("{LegalName}")));
	
	EmployerCreateProfile();  
	
	lr_think_time(10);
	
	web_reg_save_param("AUTH_TOKEN_4", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", "LAST"); 
	
	EmployerClickBenefitsTab();  
	
	lr_think_time(10);
	
	EmployerAddBenefits();  
	
	lr_think_time(10);
	
	Logout();  
	
	lr_think_time(10);
	
	 
	web_reg_save_param("AUTH_TOKEN_5", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", "LAST");
	
	EmployerTab();  
	
	lr_think_time(10);
	
	EmployerLogin();  
	
	lr_think_time(10);
	
	web_reg_save_param("AUTH_TOKEN_4", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", "LAST");
	
 
	
 

	web_reg_save_param_ex("ParamName=Plan_ID4URL", "LB=/plan_years/", "RB=/force_publish", "SEARCH_FILTERS", "LAST");
	
	EmployerClickBenefitsTab();  
	
	lr_think_time(10);
	
	for (i=0;i<atoi(lr_eval_string("{pEMPLOYEECOUNT}"));i++)  
		
 

	{
		
		 
		 
		 
		
		lr_save_int(RandomRange(3,10),"LNameLength");
 

		random_alpha("randomLN",atoi(lr_eval_string("{LNameLength}")));
		SSNGenerator("EmployeeSSN");
		SSNGenerator("EmployeeDep1SSN");
		SSNGenerator("EmployeeDep2SSN");
		lr_log_message(lr_eval_string("{EmployeeSSN}"));
		lr_log_message(lr_eval_string("{EmployeeDep1SSN}"));
		lr_log_message(lr_eval_string("{EmployeeDep2SSN}"));

		lr_think_time(10);
		
		EmployerAddEmployeeRoster();  
	}
	
	web_add_header ("X-CSRF-Token", "{AUTH_TOKEN_4}");
	
	PublishPlan();

	lr_think_time(10);
	
	Logout();  
	
	return 0;
}
# 5 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "IntegratedLandingPage.c" 1
IntegratedLandingPage()
{
	
	web_set_sockets_option("SSL_VERSION", "TLS1.1");	

 
 
	
	web_reg_find("Text=What kind of health insurance do you need?","LAST");

	lr_start_transaction("INTEG_EMPLYR_0000_1_Integrated_Landing_Page");
	
	web_url("{IntegratedURL}",
	        "URL={IntegratedURL}",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=",
	        "Snapshot=t1.inf",
	        "Mode=HTML",
	        "EXTRARES",
	        "Url=/sites/all/modules/calendar/css/calendar_multiday.css?nu66an", "ENDITEM",
	        "Url=/sites/all/modules/date/date_api/date.css?nu66an", "ENDITEM",
	        "Url=/sites/all/modules/date/date_popup/themes/datepicker.1.7.css?nu66an", "ENDITEM",
	        "Url=/sites/all/modules/fences/field.css?nu66an", "ENDITEM",
	        "Url=/sites/all/modules/extlink/extlink.css?nu66an", "ENDITEM",
	        "Url=/sites/all/modules/views/css/views.css?nu66an", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/bootstrap-theme.min.css?nu66an", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/bootstrap.min.css?nu66an", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/bootstrap-theme.xtras.css?nu66an", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/shared.css?nu66an", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/home.css?nu66an", "ENDITEM",
	        "Url=/sites/all/modules/ctools/css/ctools.css?nu66an", "ENDITEM",
	        "Url=/sites/all/themes/dchl/img/stock/home-page-layout.jpg", "Referer={IntegratedURL}sites/all/themes/dchl/css/home.css?nu66an", "ENDITEM",
	        "Url=/sites/all/modules/extlink/extlink.png", "Referer={IntegratedURL}sites/all/modules/extlink/extlink.css?nu66an", "ENDITEM",
	        "LAST");

	lr_end_transaction("INTEG_EMPLYR_0000_1_Integrated_Landing_Page", 2);

	
	return 0;
}
# 6 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "SmallBusinessTab.c" 1
SmallBusinessTab()
{
	
	web_reg_find("Text=Small Business Health Insurance",
	             "LAST");
	
	lr_start_transaction("INTEG_EMPLYR_0000_2_Small_Business_Tab");

	web_link("Small Business",
	         "Text=Small Business",
	         "Snapshot=t2.inf",
	         "EXTRARES",
	         "Url=/sites/all/themes/dchl/css/v2_3up_landing.css?nu66an", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/shop-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nu66an", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/clipboard-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nu66an", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/mouse-click-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nu66an", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/details-md-grey.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nu66an", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/folder-sm-grey.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nu66an", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/tax-filings-grey.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nu66an", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/person-gray.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nu66an", "ENDITEM",
	         "LAST");

	lr_end_transaction("INTEG_EMPLYR_0000_2_Small_Business_Tab", 2);

	return 0;
}
# 7 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "ContinueToBusinessCostCalculator.c" 1
ContinueToBusinessCostCalculator()
{
	web_reg_find("Text=Business Ballpark Cost Estimator Eligibility Test | DC Health Link",
	             "LAST");
	
	web_link("Continue",
	         "Text=Continue",
	         "Snapshot=t3.inf",
	         "EXTRARES",
	         "Url=/sites/all/themes/dchl/css/smallbusiness-calc-eligible.css?nu66an", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/progress-green-on.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nu66an", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/progress-green-off.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nu66an", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/true-lg-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/smallbusiness-calc-eligible.css?nu66an", "ENDITEM",
	         "LAST");

	web_reg_find("Text=Business Ballpark Cost Estimator",
	             "LAST");
	lr_start_transaction("INTEG_EMPLYR_0000_3_Continue_To_Business_Cost_Calculator");
	
	web_url("smallbusiness-calc-ballpark",
	        "URL={IntegratedURL}smallbusiness-calc-ballpark",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer={IntegratedURL}smallbusiness-calc-eligible",
	        "Snapshot=t4.inf",
	        "Mode=HTML",
	        "EXTRARES",
	        "Url=/sites/all/themes/dchl/css/smallbusiness-calc-ballpark.css?nu66an", "ENDITEM",
	        "Url=/sites/all/themes/dchl/js/jquery-ui/jquery-ui.theme.css?nu66an", "ENDITEM",
	        "Url=/sites/all/themes/dchl/js/jquery-ui/jquery-ui.css?nu66an", "ENDITEM",
	        "Url=/sites/all/themes/dchl/img/slider/metal-bg.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/smallbusiness-calc-ballpark.css?nu66an", "ENDITEM",
	        "Url=/sites/all/themes/dchl/fonts/glyphicons-halflings-regular.woff2", "Referer={IntegratedURL}sites/all/themes/dchl/css/bootstrap.min.css?nu66an", "ENDITEM",
	        "Url=/sites/all/themes/dchl/img/slider/handle-lg-blue.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/smallbusiness-calc-ballpark.css?nu66an", "ENDITEM",
	        "Url=/sites/all/themes/dchl/img/slider/handle-sm-blue.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/smallbusiness-calc-ballpark.css?nu66an", "ENDITEM",
	        "LAST");
	
	lr_end_transaction("INTEG_EMPLYR_0000_3_Continue_To_Business_Cost_Calculator", 2);
	
	return 0;

}
# 8 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "EnrollAppLandingPage.c" 1
EnrollAppLandingPage()
{
	

 
 
 
 
 
 
 
 
 
 
 
 
	
	
	lr_start_transaction("INTEG_EMPLYR_0000_4_Landing_Page");

	web_url("Enroll App Landing Page", 
		"URL={HTTP}://{EnrollAppLandingPage}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_end_transaction("INTEG_EMPLYR_0000_4_Landing_Page", 2);

	lr_think_time(11);
	
	return 0;
}
# 9 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "EmployerTab.c" 1
EmployerTab()
{
	
	lr_start_transaction("INTEG_EMPLYR_0001_Click_on_Employer_Portal_Tab");

	web_url("Employer Portal", 
		"URL={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/new", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={HTTP}://{EnrollAppLandingPage}/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("INTEG_EMPLYR_0001_Click_on_Employer_Portal_Tab",2);
	
	return 0;
}
# 10 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "EmployerCreateAccount.c" 1
EmployerCreateAccount()
{
	int savedcount, duplicatecount;
	web_set_sockets_option("SSL_VERSION", "TLS1.1");
		
	web_reg_save_param("AUTH_TOKEN_1", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", "LAST"); 
	
	lr_start_transaction("INTEG_EMPLYR_0002_Click_on_Create_Account");

	web_url("Create account", 
		"URL={HTTP}://{EnrollAppLandingPage}/users/sign_up", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={HTTP}://{EnrollAppLandingPage}/users/sign_in", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("INTEG_EMPLYR_0002_Click_on_Create_Account",2);
	
	lr_think_time(11);
	
	web_reg_save_param("AUTH_TOKEN_2", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", "LAST");
	web_reg_find("Text/IC=Your account has been created", "SaveCount=CreateAccountCount", "LAST");

	lr_start_transaction("INTEG_EMPLYR_0003_Create_Account_Submit");
	
	web_submit_data("users", 
		"Action={HTTP}://{EnrollAppLandingPage}/users", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={HTTP}://{EnrollAppLandingPage}/users/sign_up", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		"ITEMDATA", 
		"Name=utf8", "Value=✓", "ENDITEM", 
		"Name=authenticity_token", "Value={AUTH_TOKEN_1}", "ENDITEM",  
		"Name=user[referer]", "Value={HTTP}://{EnrollAppLandingPage}/users/sign_in", "ENDITEM", 
		"Name=user[email]", "Value={pEmpPrefix}{FEIN}@test.com", "ENDITEM", 
		"Name=user[password]", "Value=Abcd!234", "ENDITEM",
		"Name=user[password_confirmation]", "Value=Abcd!234", "ENDITEM", 
		"Name=user[invitation_id]", "Value=", "ENDITEM", 
		"Name=commit", "Value=Create account", "ENDITEM", 	
		"LAST");

	if (strcmp(lr_eval_string("{CreateAccountCount}"), "0") == 0)
	{
		lr_end_transaction("INTEG_EMPLYR_0003_Create_Account_Submit",1);
		lr_error_message("Failed to Create Account for::: %s%s@test.com", lr_eval_string("{pEmpPrefix}"), lr_eval_string("{FEIN}"));
		lr_exit(2, 2);		
	}
	else
	{
		lr_log_message("Successfully created account for ::: %s%s@test.com", lr_eval_string("{pEmpPrefix}"), lr_eval_string("{FEIN}"));
		lr_end_transaction("INTEG_EMPLYR_0003_Create_Account_Submit",0);
	}


	
	return 0;
}
# 11 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "EmployerLogin.c" 1
EmployerLogin()
{
	
	lr_start_transaction("INTEG_EMPLYR_0004_Login");
	
	web_submit_data("sign_in",
		"Action={HTTP}://{EnrollAppLandingPage}/users/sign_in",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer={HTTP}://{EnrollAppLandingPage}/users/sign_in",
		"Snapshot=t11.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=utf8", "Value=✓", "ENDITEM",
		"Name=authenticity_token", "Value={AUTH_TOKEN_5}", "ENDITEM",
		"Name=user[email]", "Value={pEmpPrefix}{FEIN}@test.com", "ENDITEM",
 
 
		"Name=user[password]", "Value=Abcd!234", "ENDITEM",
		"Name=user[remember_me]", "Value=0", "ENDITEM",
		"Name=commit", "Value=Sign in", "ENDITEM",
		"LAST");

	lr_end_transaction("INTEG_EMPLYR_0004_Login", 2);
 
	
	return 0;
}
# 12 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "EmployerCreateProfile.c" 1
EmployerCreateProfile()
{
	
	 
	web_reg_save_param_regexp(
		"ParamName=EMPLOYER_ID",
		"RegExp=employer_profiles/(.*?)\\?tab",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/employer_profiles*",
		"LAST");
    
	lr_start_transaction("INTEG_EMPLYR_0005_CreateBusinesss_Profile");

	web_submit_data("employer_profiles",
		"Action={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer={HTTP}://{EnrollAppLandingPage}/employers",
		"Snapshot=t5.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=utf8", "Value=✓", "ENDITEM",
		"Name=authenticity_token", "Value={AUTH_TOKEN_2}", "ENDITEM",
		"Name=organization[first_name]", "Value=F{FEIN}", "ENDITEM", 
		"Name=organization[last_name]", "Value=L{FEIN}", "ENDITEM", 
		"Name=organization[dob]", "Value=1978-07-15", "ENDITEM",
		"Name=jq_datepicker_ignore_organization[dob]", "Value=07/15/1978", "ENDITEM",
		"Name=organization[legal_name]", "Value={LegalName}{FEIN}", "ENDITEM", 
		"Name=organization[dba]", "Value=dba{FEIN}", "ENDITEM", 
		"Name=organization[fein]", "Value={FEIN}", "ENDITEM", 
		"Name=organization[entity_kind]", "Value=c_corporation", "ENDITEM", 
		"Name=organization[office_locations_attributes][0][address_attributes][kind]", "Value=primary", "ENDITEM",
		"Name=organization[office_locations_attributes][0][address_attributes][address_1]", "Value=609 H street NE", "ENDITEM",
		"Name=organization[office_locations_attributes][0][address_attributes][address_2]", "Value=", "ENDITEM",
		"Name=organization[office_locations_attributes][0][address_attributes][city]", "Value=washington", "ENDITEM",
		"Name=organization[office_locations_attributes][0][address_attributes][state]", "Value=DC", "ENDITEM",
		"Name=organization[office_locations_attributes][0][address_attributes][zip]", "Value=20002", "ENDITEM",
		"Name=organization[office_locations_attributes][0][phone_attributes][kind]", "Value=phone main", "ENDITEM",
		"Name=organization[office_locations_attributes][0][phone_attributes][area_code]", "Value=718", "ENDITEM",
		"Name=organization[office_locations_attributes][0][phone_attributes][number]", "Value=121-2111", "ENDITEM",
		"Name=organization[office_locations_attributes][0][phone_attributes][extension]", "Value=", "ENDITEM",
		"LAST");

	lr_end_transaction("INTEG_EMPLYR_0005_CreateBusinesss_Profile",2);

	return 0;
}
# 13 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "EmployerClickBenefitsTab.c" 1
EmployerClickBenefitsTab()
{
	
	lr_start_transaction("INTEG_EMPLYR_0006_Click_Benefits_Tab");

	web_link("Benefits", 
		"Text=Benefits", 
		"Snapshot=t30.inf", 
		"LAST");	
	
 
 
 
 
 
 
 
 
 

	lr_end_transaction("INTEG_EMPLYR_0006_Click_Benefits_Tab",2);
	
	return 0;
}
# 14 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "EmployerAddBenefits.c" 1
EmployerAddBenefits()
{
	web_reg_save_param("AUTH_TOKEN_3", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", "LAST");
	
 
		
	lr_start_transaction("INTEG_EMPLYR_0007_Click_Add_Plan");

 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
	
	lr_end_transaction("INTEG_EMPLYR_0007_Click_Add_Plan",2);
	
		lr_think_time(9);

	 
	
 

	lr_start_transaction(lr_eval_string("INTEG_EMPLYR_0008_1_Add_Plan_Year_{TxName}"));

	web_submit_data("plan_years",
		"Action={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/plan_years",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/plan_years/new",
		"Snapshot=t8.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=utf8", "Value=✓", "ENDITEM",
		"Name=authenticity_token", "Value={AUTH_TOKEN_4}", "ENDITEM",
		"Name=plan_year[start_on]", "Value=2015-11-01", "ENDITEM",
		"Name=plan_year[end_on]", "Value=2016-10-31", "ENDITEM",
		"Name=plan_year[open_enrollment_start_on]", "Value=2015-08-25", "ENDITEM",
		"Name=jq_datepicker_ignore_plan_year[open_enrollment_start_on]", "Value=08/25/2015", "ENDITEM",
		"Name=plan_year[open_enrollment_end_on]", "Value=2015-10-10", "ENDITEM",
		"Name=jq_datepicker_ignore_plan_year[open_enrollment_end_on]", "Value=10/10/2015", "ENDITEM",
		"Name=plan_year[fte_count]", "Value={pEMPLOYEECOUNT}", "ENDITEM",
		"Name=plan_year[pte_count]", "Value=0", "ENDITEM",
		"Name=plan_year[msp_count]", "Value=0", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][title]", "Value=2015 Employer Benefits", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][effective_on_offset]", "Value=0", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][plan_option_kind]", "Value={PlanOption}", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][carrier_for_elected_plan]", "Value={Carrier_ID}", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][metal_level_for_elected_plan]", "Value={Metal_Level}", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][reference_plan_id]", "Value={ReferencePlan}", "ENDITEM",
		"Name=reference_plan", "Value={ReferencePlan}", "ENDITEM",
		"Name=reference_plan", "Value=", "ENDITEM",
		"Name=reference_plan", "Value=", "ENDITEM",
		"Name=reference_plan", "Value=", "ENDITEM",
		"Name=reference_plan", "Value=", "ENDITEM",
		"Name=reference_plan", "Value=", "ENDITEM",
		"Name=reference_plan", "Value=", "ENDITEM",
		"Name=reference_plan", "Value=", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][0][relationship]", "Value=employee", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][0][premium_pct]", "Value=75", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][1][relationship]", "Value=spouse", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][1][premium_pct]", "Value=75", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][1][offered]", "Value=false", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][1][offered]", "Value=true", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][2][relationship]", "Value=domestic_partner", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][2][premium_pct]", "Value=75", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][2][offered]", "Value=false", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][2][offered]", "Value=true", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][3][relationship]", "Value=child_under_26", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][3][premium_pct]", "Value=75", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][3][offered]", "Value=false", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][3][offered]", "Value=true", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][4][relationship]", "Value=child_26_and_over", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][4][premium_pct]", "Value=75", "ENDITEM",
		"Name=plan_year[benefit_groups_attributes][0][relationship_benefits_attributes][4][offered]", "Value=false", "ENDITEM",
		"LAST");

	lr_end_transaction(lr_eval_string("INTEG_EMPLYR_0008_1_Add_Plan_Year_{TxName}"), 2);


	return 0;
}
# 15 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "PublishPlan.c" 1
PublishPlan()
{
	

	lr_start_transaction("INTEG_EMPLYR_0011_PublishPlan");
	
	web_custom_request("publish",
		"URL={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/plan_years/{Plan_ID4URL}/publish",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/javascript",
		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}",
		"Snapshot=t8.inf",
		"Mode=HTML",
		"EncType=",
		"LAST");
	
	web_reg_find("Text/IC=Plan Year successfully published", "SaveCount=PublishCount", "LAST");
	
	web_url("55c5577169702d34e21e0100",
		"URL={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}",
		"Snapshot=t9.inf",
		"Mode=HTML",
		"LAST");

	if (strcmp(lr_eval_string("{PublishCount}"), "0") == 0)
	{
		lr_end_transaction("INTEG_EMPLYR_0011_PublishPlan",1);
		lr_error_message("Failed to Publish Plan for User::: %s%s@test.com", lr_eval_string("{pEmpPrefix}"), lr_eval_string("{FEIN}"));
		lr_exit(2, 2);
	}
	else
	{
		lr_end_transaction("INTEG_EMPLYR_0011_PublishPlan",0);
	}
			
	
	return 0;
}
# 16 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "Logout.c" 1
Logout()
{
	lr_start_transaction("INTEG_EMPLYR_1000_Logout");

 
 
 
 
 
 
 
 
 
 
 
 

	web_url("logout", 
		"URL=https://webpp.dchealthlink.com/oam/server/logout?end_url=https://webpp.dchealthlink.com/fed/user/logout?returnurl=https://preprod.dchealthlink.com", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://webpp.dchealthlink.com/oam/server/logout?end_url=https://webpp.dchealthlink.com/fed/user/logout?returnurl=https://preprod.dchealthlink.com", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"LAST");	
	
	lr_end_transaction("INTEG_EMPLYR_1000_Logout",2);
	
	return 0;
}
# 17 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "RandomRange.c" 1
RandomRange(int lower,int upper)
{
	return (rand()%(upper-lower+1))+lower;
	
}
# 18 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "EmployerAddEmployeeRoster.c" 1
EmployerAddEmployeeRoster()
{
	int looper = 1, retry = 0, passcount, savedcount;
	
	web_reg_save_param("Auth_Token_010", "LB=<meta name=\"csrf-token\" content=\"", "RB=\" />", "LAST");
	
	lr_start_transaction("INTEG_EMPLYR_0009_Click_Employee_Tab");
	
 
 
 
 
 
 
 
 
 
	
	web_link("Employees",
	         "Text=Employees",
	         "Snapshot=t27.inf",
	         "LAST");
	
 
	web_reg_save_param_regexp(
		"ParamName=Benefit_Group_ID",
		"RegExp=option\\ value=\"(.*?)\">2015 Employer Benefits",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");	
	
	web_link("Add New Employee",
	         "Text=Add New Employee",
	         "Snapshot=t28.inf",
	         "LAST");
	
	lr_end_transaction("INTEG_EMPLYR_0009_Click_Employee_Tab", 2);
	
	lr_think_time(10);
	
	while (looper){
		
		web_reg_find("Text=provided SSN belongs", "SaveCount=savedcount", "LAST");
		web_reg_find("Text=Census Employee is successfully", "SaveCount=passcount","LAST");

		lr_start_transaction(lr_eval_string("INTEG_EMPLYR_0010_{pAddEmployeeTrName}"));


	
	web_submit_data("census_employees",
	    "Action={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/census_employees?employer_id={EMPLOYER_ID}",
 
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
 
		"Referer={HTTP}://{EnrollAppLandingPage}/employers/employer_profiles/{EMPLOYER_ID}/census_employees/new?tab=employees",
		"Snapshot=t10.inf",
		"Mode=HTML",
		"EncodeAtSign=YES",
		"ITEMDATA",
		"Name=utf8", "Value=?", "ENDITEM",
		"Name=authenticity_token", "Value={Auth_Token_010}", "ENDITEM",
		"Name=census_employee[first_name]", "Value={EmpFName}", "ENDITEM",
		"Name=census_employee[middle_name]", "Value={EmpMI}", "ENDITEM",
		"Name=census_employee[last_name]", "Value={randomLN}", "ENDITEM",
		"Name=census_employee[name_sfx]", "Value=", "ENDITEM",
		"Name=census_employee[dob]", "Value={EmpDOB}", "ENDITEM",
		"Name=jq_datepicker_ignore_census_employee[dob]", "Value={EmpDOBPicker}", "ENDITEM",
		"Name=census_employee[ssn]", "Value={EmployeeSSN}", "ENDITEM",
		"Name=census_employee[gender]", "Value=female", "ENDITEM",
		"Name=census_employee[hired_on]", "Value={EmpHireDate}", "ENDITEM",
		"Name=jq_datepicker_ignore_census_employee[hired_on]", "Value={EmpHireDatePicker}", "ENDITEM",
		"Name=census_employee[is_business_owner]", "Value=0", "ENDITEM",
		"Name=census_employee[benefit_group_assignments_attributes][0][benefit_group_id]", "Value={Benefit_Group_ID}", "ENDITEM",
		"Name=census_employee[address_attributes][kind]", "Value=home", "ENDITEM",
		"Name=census_employee[address_attributes][address_1]", "Value=609 H Street NE", "ENDITEM",
		"Name=census_employee[address_attributes][address_2]", "Value=", "ENDITEM",
		"Name=census_employee[address_attributes][city]", "Value=Washington", "ENDITEM",
		"Name=census_employee[address_attributes][state]", "Value=DC", "ENDITEM",
		"Name=census_employee[address_attributes][zip]", "Value=20002", "ENDITEM",
		"Name=census_employee[email_attributes][kind]", "Value=work", "ENDITEM",
		"Name=census_employee[email_attributes][address]", "Value={pEmlyePrefix}{EmployeeSSN}@test.com", "ENDITEM",
 
 
 
 
 
 
 
 
 
		"LAST");

 		
# 130 "EmployerAddEmployeeRoster.c"
		 
# 166 "EmployerAddEmployeeRoster.c"

 
		
		looper = 0;
		if (atoi(lr_eval_string("{passcount}"))){
			EmployeeInfoOutput();  
			lr_end_transaction(lr_eval_string("INTEG_EMPLYR_0010_{pAddEmployeeTrName}"), 0);
		}
		
		else if (atoi(lr_eval_string("{savedcount}"))) {
			lr_output_message("SSN Already in use, retrying");
			looper = 1;
			retry++;
			
			if (retry > 4){
				lr_output_message("Could Not Create New Employee");
				lr_save_int(atoi(lr_eval_string("{pSSN3}"))+1000,"pSSN3");
			}
		}
		else{
			lr_end_transaction(lr_eval_string("INTEG_EMPLYR_0010_{pAddEmployeeTrName}"),2);
		}
	}
	
	return 0;
}
# 19 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "EmployeeInfoOutput.c" 1

EmployeeInfoOutput()
{
 

 
	long file;
	char names[10];

	fopen(lr_eval_string("{EmpFileName}"), "a+");
	if ((file = fopen(lr_eval_string("{EmpFileName}"), "a+")) == 0)
	{
		lr_error_message ("Cannot open %s", file); 
		return -1; 
	}
	
 
	fprintf(file, "%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s%s@test.com\t%s\t%s\t%s\t%s%s@test.com\n", lr_eval_string("{EmpFName}"), lr_eval_string("{EmpMI}"), lr_eval_string("{randomLN}"), lr_eval_string("{EmpDOBPicker}"),lr_eval_string("{EmpDOB}"),lr_eval_string("{EmployeeSSN}"),lr_eval_string("{EmpSEX}"),lr_eval_string("{EmpHireDate}"),lr_eval_string("{EmpHireDatePicker}"),lr_eval_string("{EmpAddressL1}"),lr_eval_string("{EmpCity}"),lr_eval_string("{EmpZip}"), lr_eval_string("{pEmlyePrefix}"),  lr_eval_string("{EmployeeSSN}"), lr_eval_string("{EmpDOBDay}"), lr_eval_string("{EmpDOBMonth}"), lr_eval_string("{EmpDOBYear}"), lr_eval_string("{pEmpPrefix}"), lr_eval_string("{FEIN}"));	 
	fclose(file);
			
return 0;

}
# 20 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "EmployeeRosterSizeCalculator.c" 1
EmployeeRosterSizeCalculator()
{
int rands[7];	
lr_save_int(RandomRange(0,100),"Random");

rands[0] = RandomRange(1,10);
rands[1] = RandomRange(10,20);
rands[2] = RandomRange(20,30);
rands[3] = RandomRange(30,40);
rands[4] = RandomRange(40,50);
 
 

 
# 24 "EmployeeRosterSizeCalculator.c"
if ((atoi(lr_eval_string("{Random}")) > 90)) {
	lr_save_int(rands[4],"pEMPLOYEECOUNT");
	lr_save_string("05_FortyToFiftyEmployee","pAddEmployeeTrName");
}
else if (atoi(lr_eval_string("{Random}")) > 80){
	lr_save_int(rands[3],"pEMPLOYEECOUNT");
	lr_save_string("04_ThirtyToFortyEmployee","pAddEmployeeTrName");
}
else if (atoi(lr_eval_string("{Random}")) > 70){
	lr_save_int(rands[2],"pEMPLOYEECOUNT");
	lr_save_string("03_TwentyToThirtyEmployee","pAddEmployeeTrName");
}
else if (atoi(lr_eval_string("{Random}")) > 60){
	lr_save_int(rands[1],"pEMPLOYEECOUNT");
	lr_save_string("02_TenToTwentyEmployee","pAddEmployeeTrName");
}
else {
	lr_save_int(rands[0],"pEMPLOYEECOUNT");
	lr_save_string("01_OneToTenEmployee","pAddEmployeeTrName");
}

 


	return 0;
}
# 21 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "CreateFiles.c" 1
CreateFiles()
{
	
 
	long EmpFile = fopen(lr_eval_string("{EmpFileName}"), "a+");
	char line[1024];
	
	if (fgets(line,sizeof(line),EmpFile)==0){
		fprintf(EmpFile,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",
			"EmpFName","EmpMI","EmpLName","EmpDOBPicker","EmpDOB","EmpSSN","EmpSex","EmpHireDate",
			"EmpHireDatePicker","EmpAddressL1","EmpCity","EmpZip","EmpWorkEmail","EmpDOBDay","EmpDOBMonth",
			"EmpDOBYear","EmployerEmail");
	}

	fclose(EmpFile);
	
	return 0;
}
# 22 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 23 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployerportal\\\\combined_IntegratedEmployerPortal.c" 2

