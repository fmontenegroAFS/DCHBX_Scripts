# 1 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c"
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







 
 

















# 1 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

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

 
 
 

                               


 
 
 





















# 2 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

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
 
 
 
 
 





# 8 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 9 "globals.h" 2

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





 
 
 





# 10 "globals.h" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/modal_dialog_callbacks.h" 1





# 11 "globals.h" 2

# 1 "SSNGenerator.h" 1
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

RandomRange(int lower,int upper)
{
	return (rand()%(upper-lower+1))+lower;
	
}
# 12 "globals.h" 2



 
 


# 3 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	
	srand(atoi(lr_eval_string("{MillisSeed}")));
	
	return 0;
}
# 4 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "Logic.c" 1
Logic()
{
	GenerateSSNs();
	
	IntegratedLandingPage();

	EmployeeTab();

	EnrollAppHomePage();
	
	EmployeeCreateAccount();
	
 
	
 
	
	EmployeeBeginCoverage();
	
	Logout();
		
 
 
 
 
 
	
 
	
 
		
	return 0;
}
# 5 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "IntegratedLandingPage.c" 1
IntegratedLandingPage()
{
	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_reg_find("Text=What kind of health insurance do you need?","LAST");

 

	lr_start_transaction("INTEG_EMPLYE_0000_1_Integrated_Landing_Page");

	web_url("Integrated Landing Page",
	        "URL={IntegratedURL}",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Referer=",
	        "Snapshot=t1.inf",
	        "Mode=HTML",
	        "EXTRARES",
	        "Url=/sites/all/modules/fences/field.css?nuf0fm", "ENDITEM",
	        "Url=/sites/all/modules/date/date_popup/themes/datepicker.1.7.css?nuf0fm", "ENDITEM",
	        "Url=/sites/all/modules/date/date_api/date.css?nuf0fm", "ENDITEM",
	        "Url=/sites/all/modules/calendar/css/calendar_multiday.css?nuf0fm", "ENDITEM",
	        "Url=/sites/all/modules/extlink/extlink.css?nuf0fm", "ENDITEM",
	        "Url=/sites/all/modules/views/css/views.css?nuf0fm", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/bootstrap-theme.min.css?nuf0fm", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/bootstrap.min.css?nuf0fm", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/bootstrap-theme.xtras.css?nuf0fm", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/shared.css?nuf0fm", "ENDITEM",
	        "Url=/sites/all/themes/dchl/css/home.css?nuf0fm", "ENDITEM",
	        "Url=/sites/all/modules/ctools/css/ctools.css?nuf0fm", "ENDITEM",
	        "Url=/sites/all/modules/custom/dchl_google_translate/dchl_google_translate.css?nuf0fm", "ENDITEM",
	        "Url=/misc/drupal.js?nuf0fm", "ENDITEM",
	        "Url=/sites/all/themes/dchl/img/stock/home-page-layout.jpg", "Referer={IntegratedURL}sites/all/themes/dchl/css/home.css?nuf0fm", "ENDITEM",
	        "LAST");

	lr_end_transaction("INTEG_EMPLYE_0000_1_Integrated_Landing_Page", 2);

	
	return 0;
}
# 6 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "EmployeeTab.c" 1
EmployeeTab()
{
	
	web_reg_find("Text=Employee Health Insurance","LAST");

 

	lr_start_transaction("INTEG_EMPLYE_0000_2_Employee_Tab");

	web_link("Employee",
	         "Text=Employee",
	         "Snapshot=t2.inf",
	         "EXTRARES",
	         "Url=/sites/all/themes/dchl/css/v2_3up_landing.css?nuf0fm", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/clipboard-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuf0fm", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/progress-green-on.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuf0fm", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/shop-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuf0fm", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/mouse-click-green.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/v2_3up_landing.css?nuf0fm", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/details-md-grey.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuf0fm", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/person-circle-gray.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuf0fm", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/person-gray.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuf0fm", "ENDITEM",
	         "Url=/sites/all/themes/dchl/img/icon/tax-filings-grey.png", "Referer={IntegratedURL}sites/all/themes/dchl/css/shared.css?nuf0fm", "ENDITEM",
	         "Url=/sites/all/modules/extlink/extlink.png", "Referer={IntegratedURL}sites/all/modules/extlink/extlink.css?nuf0fm", "ENDITEM",
	         "LAST");

	lr_end_transaction("INTEG_EMPLYE_0000_2_Employee_Tab", 2);


	return 0;
}
# 7 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "EnrollAppHomePage.c" 1
EnrollAppHomePage()
{
	
	 
	web_reg_save_param_regexp("ParamName=authenticity_token","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");

	web_reg_find("Text=Welcome to DC Health Link | DC Health Link",
	             "LAST");
	
	web_link("Continue",
	         "Text=Continue",
	         "Snapshot=t3.inf",
	         "EXTRARES",
	         "Url=http://{enrollAppLandingPage}/assets/AvenirLTStd-Light-af804d2ea26c0ab34f6d6f1c148e90b2.woff", "Referer=http://enroll-test.dchbx.org/assets/application-98fd18886e466dc937acbb564355ff71.css", "ENDITEM",
	         "LAST");


 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	return 0;
}
# 8 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "ExistingEmpLogin.c" 1
ExistingEmpLogin()
{
 
# 15 "ExistingEmpLogin.c"
 

 
# 27 "ExistingEmpLogin.c"
	lr_start_transaction("EMPLYE_0005_ExistingAccountLogin");
	
	web_submit_data("sign_in",
		"Action=http://{enrollAppLandingPage}/users/sign_in",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/users/sign_in",
		"Snapshot=t29.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=utf8", "Value=?", "ENDITEM",
		"Name=authenticity_token", "Value={authenticity_token_5}", "ENDITEM",
		"Name=user[email]", "Value={EmpWorkEmail}", "ENDITEM",
		"Name=user[password]", "Value=Abcd!234", "ENDITEM",
		"Name=user[remember_me]", "Value=0", "ENDITEM",
		"Name=commit", "Value=Sign in", "ENDITEM",
		"LAST");
	lr_end_transaction("EMPLYE_0005_ExistingAccountLogin", 2);
	
	lr_think_time(10);
	
	return 0;
}
# 9 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "EmployeeCreateAccount.c" 1
EmployeeCreateAccount()
{

 
 

 	web_reg_find("Text/IC=Your account has been created", "SAVECOUNT=AccountCreated", "LAST" );
 	
	lr_start_transaction("EMPLYE_0004_Create_Account_Submit");

	web_submit_data("users",
		"Action=http://{enrollAppLandingPage}/users",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/users/sign_up",
		"Snapshot=t7.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=utf8", "Value=?", "ENDITEM",
		"Name=authenticity_token", "Value={authenticity_token}", "ENDITEM",
		"Name=user[referer]", "Value=http://{enrollAppLandingPage}/users/sign_in", "ENDITEM",
		"Name=user[email]", "Value={EmpWorkEmail}", "ENDITEM",
		"Name=user[password]", "Value=Abcd!234", "ENDITEM",
		"Name=user[password_confirmation]", "Value=Abcd!234", "ENDITEM",
		"Name=user[invitation_id]", "Value=", "ENDITEM",
		"Name=commit", "Value=Create account", "ENDITEM",
		"LAST");

	if (strcmp(lr_eval_string("{AccountCreated}"), "0") > 0)
	{
		lr_end_transaction("EMPLYE_0004_Create_Account_Submit",0);
	}
	else
	{
		lr_end_transaction("EMPLYE_0004_Create_Account_Submit",1);
		lr_error_message("Failed to create account for %s", lr_eval_string("{EmpWorkEmail}"));
		lr_exit(2, 2);
	}
	
	lr_think_time(10);
	
	return 0;
}
# 10 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "EmployeeBeginCoverage.c" 1
EmployeeBeginCoverage()
{

	web_reg_find("Text/IC=Personal Information", "SAVECOUNT=ContinueButton", "LAST" );
	 	
	lr_start_transaction("EMPLYE_0006_Continue_Coverage");

	web_url("Continue", 
		"URL=http://{enrollAppLandingPage}/insured/employee/search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{enrollAppLandingPage}/insured/employee/welcome", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"LAST");

	if (strcmp(lr_eval_string("{ContinueButton}"), "0") > 0)
	{
			lr_end_transaction("EMPLYE_0006_Continue_Coverage",0);
	}
	else
	{
			lr_end_transaction("EMPLYE_0006_Continue_Coverage",1);
			lr_error_message("Failed to get Welcome page for %s", lr_eval_string("{EmpWorkEmail}"));
			lr_exit(2, 2);
	}
	
	lr_think_time(6);
		
 	

	 
	web_reg_save_param_regexp("ParamName=authenticity_token_5","RegExp=\\ content=\"(.*?)\"\\ ", "Ordinal=2", "SEARCH_FILTERS", "Scope=Body","IgnoreRedirections=No","LAST");

	 
	web_reg_save_param_regexp("ParamName=EligibleDate", "RegExp=/dt>\\\n<dd>(.*?)</dd", "Ordinal=3", "SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");

	 
	web_reg_save_param_regexp("ParamName=EmployeeID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name",	"Ordinal=9","SEARCH_FILTERS",	"Scope=Body","IgnoreRedirections=No","LAST");

	 
	web_reg_save_param_regexp("ParamName=EmpHireDate", "RegExp=/dt>\\\n<dd>(.*?)</dd", "Ordinal=2","SEARCH_FILTERS", "Scope=Body", "IgnoreRedirections=No",	"LAST");

	 
	web_reg_save_param_regexp("ParamName=CovgStartDate", "RegExp=/dt>\\\n<dd>(.*?)</dd", "Ordinal=3", "SEARCH_FILTERS", "Scope=Body", "IgnoreRedirections=No", "LAST");	
	
 	
	
	web_reg_find("Text/IC=Eligible for Coverage", "SAVECOUNT=AddPersonalInfo", "LAST" );
	web_reg_find("Text/IC=No employer plan found.", "SAVECOUNT=NoEmployerFound", "LAST" );
	
	
	lr_start_transaction("EMPLYE_0007_Add_Personal_Info");

	web_url("match", 
		"URL=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/employee/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=TestE&person%5Bmiddle_name%5D=L&person%5Blast_name%5D={EmpLName}&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D={EmpSSN}&person%5Bgender%5D={EmpSEX}",
		"TargetFrame=",
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/employee/search", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"LAST");
	
	if (strcmp(lr_eval_string("{AddPersonalInfo}"), "0") > 0)
	{
			lr_end_transaction("EMPLYE_0007_Add_Personal_Info",0);
	}
	else if (strcmp(lr_eval_string("{SAVECOUNT}"), "0") > 0)
	{
			lr_end_transaction("EMPLYE_0007_Add_Personal_Info",1);
			lr_error_message("No Employer Found for Employee %s & Employer ID is %s", lr_eval_string("{EmpWorkEmail}"), lr_eval_string("{EmployerEmail}"));
			lr_exit(2, 2);
	}
	else
	{
			lr_end_transaction("EMPLYE_0007_Add_Personal_Info",1);
			lr_error_message("Failed to Add Personal Info for %s", lr_eval_string("{EmpWorkEmail}"));
			lr_exit(2, 2);
	}
		
	lr_think_time(10);
	
 

 	

	 
 

	 
	web_reg_save_param_regexp("ParamName=person_id","RegExp=edit_person_(.*?)\"\\ action","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*","LAST");
	
	 
	web_reg_save_param_regexp("ParamName=employee_role_id",	"RegExp=employee/(.*?)/","SEARCH_FILTERS","Scope=Headers","IgnoreRedirections=No","RequestUrl=*/employee*", "Notfound=warning", "LAST");
		
	 
	web_reg_save_param_regexp("ParamName=EmployeeEmailAttrID","RegExp=type=\"hidden\"\\ value=\"(.*?)\"\\ name","Ordinal=11","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/edit*", "Notfound=warning", "LAST");
	
	web_add_header ("X-CSRF-Token", "{authenticity_token}");
	
	web_reg_save_param_regexp(	"ParamName=authenticity_token_1","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No", "Notfound=warning","LAST");
	
	 
	web_reg_save_param_regexp("ParamName=Employee_Role_ID","RegExp=employee/(.*?)/","SEARCH_FILTERS",	"Scope=Headers","IgnoreRedirections=No","RequestUrl=*/employee*", "Notfound=warning","LAST");

 
	web_reg_find("Text/IC={EmpWorkEmail}", "SAVECOUNT=ClickThisismyEmployer", "LAST" );
	               
	web_reg_find("Text/IC=The Oracle account creation service is currently unavailable", "SAVECOUNT=OracleServiceFailure", "LAST" );
	
	lr_start_transaction("EMPLYE_0008_1_This_is_my_Employer");

	web_submit_data("employee", 
		"Action=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/employee", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/employee/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=TestE&person%5Bmiddle_name%5D=L&person%5Blast_name%5D={EmpLName}&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D={EmpSSN}&person%5Bgender%5D={EmpSEX}", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=utf8", "Value=?", "ENDITEM", 
		"Name=authenticity_token", "Value={authenticity_token_5}", "ENDITEM", 
		"Name=commit", "Value=This is my employer", "ENDITEM", 
		"Name=employment_relationship[first_name]", "Value={EmpFName}", "ENDITEM", 
		"Name=employment_relationship[last_name]", "Value={EmpLName}", "ENDITEM",
		"Name=employment_relationship[middle_name]", "Value=L", "ENDITEM",
		"Name=employment_relationship[name_pfx]", "Value=", "ENDITEM",
		"Name=employment_relationship[name_sfx]", "Value=", "ENDITEM",
		"Name=employment_relationship[gender]", "Value={EmpSEX}", "ENDITEM",
		"Name=employment_relationship[hired_on]", "Value={EmpHireDate}", "ENDITEM",
		"Name=employment_relationship[eligible_for_coverage_on]", "Value={CovgStartDate}", "ENDITEM",
		"Name=employment_relationship[census_employee_id]", "Value={EmployeeID}", "ENDITEM",
		"LAST");
	
	if (strcmp(lr_eval_string("{ClickThisismyEmployer}"), "0") > 0)
	{
			lr_end_transaction("EMPLYE_0008_1_This_is_my_Employer",0);
	}
	else if (strcmp(lr_eval_string("{OracleServiceFailure}"), "0") > 0)
	{
			lr_end_transaction("EMPLYE_0008_1_This_is_my_Employer",1);
			lr_error_message("Unable to connect to the Oracle account creation service");
	}
	else		
	{
			lr_end_transaction("EMPLYE_0008_1_This_is_my_Employer",1);
			lr_error_message("Step 1 : Failed to click This Is my Employer Button for %s", lr_eval_string("{EmpWorkEmail}"));
			lr_exit(2, 2);
	}
	
	web_reg_find("Text/IC={EmpWorkEmail}", "SAVECOUNT=ClickThisismyEmployer_1", "LAST" );
		
	lr_start_transaction("EMPLYE_0008_2_This_is_my_Employer");
		
	web_link("I'm an {applicationTypeNameCase}",
		"Text=I'm an {applicationTypeNameCase}", 
		"Snapshot=t9.inf", 
		"LAST");

	if (strcmp(lr_eval_string("{ClickThisismyEmployer_1}"), "0") > 0)
	{
			lr_end_transaction("EMPLYE_0008_2_This_is_my_Employer",0);
	}
	else
	{
			lr_end_transaction("EMPLYE_0008_2_This_is_my_Employer",1);
			lr_error_message("Step 2 - web link I am an Employee Failed  for %s", lr_eval_string("{EmpWorkEmail}"));
			lr_exit(2, 2);
	}
	
	lr_think_time(19);	

 

	 
	web_reg_save_param_regexp("ParamName=family_id","RegExp=family_id=(.*?)\">Add\\ Member","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=Yes","RequestUrl=*/family_members*","LAST");

	
	 
	web_reg_save_param_regexp("ParamName=authenticity_token_3","RegExp=\\ content=\"(.*?)\"\\ ", "Ordinal=2", "SEARCH_FILTERS", "Scope=Body","IgnoreRedirections=No","LAST");


 
			
	lr_start_transaction("EMPLYE_0009_Contact_Info_Continue");
	
		web_submit_data("55cfacdd69702d3fa4121200",
		"Action=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/employee/{person_id}",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/employee/{Employee_Role_ID}/edit",
		"Snapshot=t19.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=utf8", "Value=?", "ENDITEM",
		"Name=_method", "Value=put", "ENDITEM",
		"Name=authenticity_token", "Value={authenticity_token_1}", "ENDITEM",
		"Name=exit_after_method", "Value=false", "ENDITEM",
		"Name=person[employee_role_id]", "Value={Employee_Role_ID}", "ENDITEM",
		"Name=people[id]", "Value=", "ENDITEM",
		"Name=person[first_name]", "Value={EmpFName}", "ENDITEM",
		"Name=person[middle_name]", "Value=L", "ENDITEM",
		"Name=person[last_name]", "Value={EmpLName}", "ENDITEM",
		"Name=person[name_sfx]", "Value=", "ENDITEM",
		"Name=person[dob]", "Value={EmpDOB}", "ENDITEM",
		"Name=person[ssn]", "Value={EmpSSN}", "ENDITEM",
		"Name=person[gender]", "Value={EmpSEX}", "ENDITEM",
		"Name=person[addresses_attributes][0][kind]", "Value=home", "ENDITEM",
		"Name=person[addresses_attributes][0][address_1]", "Value=609 H Street NE", "ENDITEM",
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
		"Name=person[phones_attributes][0][full_phone_number]", "Value=(213) 131-3213", "ENDITEM",
		"Name=person[phones_attributes][1][kind]", "Value=mobile", "ENDITEM",
		"Name=person[phones_attributes][1][full_phone_number]", "Value=", "ENDITEM",
		"Name=person[phones_attributes][2][kind]", "Value=work", "ENDITEM",
		"Name=person[phones_attributes][2][full_phone_number]", "Value=(454) 545-5342", "ENDITEM",
		"Name=person[phones_attributes][3][kind]", "Value=fax", "ENDITEM",
		"Name=person[phones_attributes][3][full_phone_number]", "Value=", "ENDITEM",
		"Name=person[emails_attributes][0][kind]", "Value=home", "ENDITEM",
		"Name=person[emails_attributes][0][address]", "Value={EmpWorkEmail}", "ENDITEM",
		"Name=person[emails_attributes][0][id]", "Value={EmployeeEmailAttrID}", "ENDITEM",
		"Name=person[emails_attributes][1][kind]", "Value=work", "ENDITEM",
		"Name=person[emails_attributes][1][address]", "Value=", "ENDITEM",
		"LAST");

	lr_end_transaction("EMPLYE_0009_Contact_Info_Continue",2);
	
	lr_think_time(10);

 
	
 
 

	web_add_header ("X-CSRF-Token", "{authenticity_token_3}");
		Add_a_Member();

 	





 		

	lr_think_time(10);

 

 
 
	web_add_header ("X-CSRF-Token", "{authenticity_token_3}");
	
 

	lr_start_transaction("EMPLYE_0011_Confim_Member_Dependent_1");
	
	web_submit_data("family_members",
		"Action=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members",
		"Method=POST",
		"RecContentType=text/javascript",
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members?employee_role_id={Employee_Role_ID}",
		"Snapshot=t21.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=utf8", "Value=?", "ENDITEM",
		"Name=dependent[first_name]", "Value=Honey", "ENDITEM",
		"Name=dependent[middle_name]", "Value=", "ENDITEM",
		"Name=dependent[last_name]", "Value={EmpLName}", "ENDITEM",
		"Name=dependent[dob]", "Value=1978-10-10", "ENDITEM",
		"Name=jq_datepicker_ignore_dependent[dob]", "Value=10/10/1978", "ENDITEM",
		"Name=dependent[ssn]", "Value={EmployeeSpouseSSN}", "ENDITEM",
		"Name=dependent[relationship]", "Value=spouse", "ENDITEM",
		"Name=dependent[gender]", "Value=male", "ENDITEM",
		"Name=dependent[family_id]", "Value={family_id}", "ENDITEM",
		"Name=button", "Value=", "ENDITEM",
		"LAST");
	
	lr_end_transaction("EMPLYE_0011_Confim_Member_Dependent_1",2);

	lr_think_time(15);

 

 
	web_add_header ("X-CSRF-Token", "{authenticity_token_3}");
	
	Add_a_Member();
	
 		
	
	web_add_header ("X-CSRF-Token", "{authenticity_token_3}");

	lr_start_transaction("EMPLYE_0012_Confim_Member_Dependent_2");

	web_submit_data("family_members_2",
		"Action=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members",
		"Method=POST",
		"RecContentType=text/javascript",
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members?employee_role_id={Employee_Role_ID}",
		"Snapshot=t23.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=utf8", "Value=?", "ENDITEM",
		"Name=dependent[first_name]", "Value=SrPain", "ENDITEM",
		"Name=dependent[middle_name]", "Value=", "ENDITEM",
		"Name=dependent[last_name]", "Value={EmpLName}", "ENDITEM",
		"Name=dependent[dob]", "Value=1990-11-11", "ENDITEM",
		"Name=jq_datepicker_ignore_dependent[dob]", "Value=11/11/2000", "ENDITEM",
		"Name=dependent[ssn]", "Value={EmployeeChildOneSSN}", "ENDITEM",
		"Name=dependent[relationship]", "Value=child", "ENDITEM",
		"Name=dependent[gender]", "Value=male", "ENDITEM",
		"Name=dependent[family_id]", "Value={family_id}", "ENDITEM",
		"Name=button", "Value=", "ENDITEM",
		"LAST");

	lr_end_transaction("EMPLYE_0012_Confim_Member_Dependent_2",2);

	lr_think_time(10);
 

 
	web_add_header ("X-CSRF-Token", "{authenticity_token_3}");
		
	Add_a_Member();
	
 		
	
	web_add_header ("X-CSRF-Token", "{authenticity_token_3}");
	
	lr_start_transaction("EMPLYE_0013_Confim_Member_Dependent_3");

	web_submit_data("family_members_2",
		"Action=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members",
		"Method=POST",
		"RecContentType=text/javascript",
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members?employee_role_id={Employee_Role_ID}",
		"Snapshot=t23.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=utf8", "Value=?", "ENDITEM",
		"Name=dependent[first_name]", "Value=JrPain", "ENDITEM",
		"Name=dependent[middle_name]", "Value=", "ENDITEM",
		"Name=dependent[last_name]", "Value={EmpLName}", "ENDITEM",
		"Name=dependent[dob]", "Value=1991-11-11", "ENDITEM",
		"Name=jq_datepicker_ignore_dependent[dob]", "Value=11/11/2001", "ENDITEM",
		"Name=dependent[ssn]", "Value={EmployeeChildTwoSSN}", "ENDITEM",
		"Name=dependent[relationship]", "Value=child", "ENDITEM",
		"Name=dependent[gender]", "Value=male", "ENDITEM",
		"Name=dependent[family_id]", "Value={family_id}", "ENDITEM",
		"Name=button", "Value=", "ENDITEM",
		"LAST");

	lr_end_transaction("EMPLYE_0013_Confim_Member_Dependent_3",2);

	lr_think_time(10);
 

	 
	web_reg_save_param_regexp("ParamName=authenticity_token_2","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");

	 
	web_reg_save_param_regexp("ParamName=Spouse","RegExp=id=\"family_member_ids_0\"\\ value=\"(.*?)\"\\ readonly","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");	

	 
	web_reg_save_param_regexp("ParamName=Child_1","RegExp=id=\"family_member_ids_1\"\\ value=\"(.*?)\"\\ onclick","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");	

	 
	web_reg_save_param_regexp("ParamName=Child_2","RegExp=id=\"family_member_ids_2\"\\ value=\"(.*?)\"\\ onclick","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");	

	 
	web_reg_save_param_regexp("ParamName=Child_3","RegExp=id=\"family_member_ids_3\"\\ value=\"(.*?)\"\\ onclick","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");	

	
 

	lr_start_transaction("EMPLYE_0014_Continue_to_Select_Plan");

	web_url("new",
		"URL=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/group_selections/new?change_plan=&employee_role_id={employee_role_id}&person_id={person_id}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members?employee_role_id={employee_role_id}",
		"Snapshot=t36.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("EMPLYE_0014_Continue_to_Select_Plan",2);
	
	lr_think_time(10);

 	

 
 

 
	web_reg_save_param_regexp(
		"ParamName=plan_shoppings",
		"RegExp=plan_shoppings/(.*?)\\?coverage_kind",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/group_selections*",
		"LAST");	
		
 
 

 
	
	 
 
 
 
 
 
 
 
 
 
 
	
	web_reg_save_param_ex("ParamName=plan_count", "LB=plans-count\'>", "RB=</strong>", "SEARCH_FILTERS", "LAST" );
	
	 
	web_reg_save_param_regexp("ParamName=authenticity_token_3","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");
	
 	
	
	lr_start_transaction("EMPLYE_0015_Select_Plan_Continue");
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	
 
 
 
 
 
 
 
 

	 
	web_reg_save_param_regexp("ParamName=authenticity_token_3","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");	
	
	web_submit_data("group_selections",
		"Action=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/group_selections",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/group_selections/new?change_plan=&employee_role_id={employee_role_id}&person_id={person_id}",
		"Snapshot=t37.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=utf8", "Value=?", "ENDITEM",
		"Name=authenticity_token", "Value={authenticity_token_3}", "ENDITEM",
		"Name=person_id", "Value={person_id}", "ENDITEM",
		"Name=employee_role_id", "Value={employee_role_id}", "ENDITEM",
		"Name=coverage_household_id", "Value=", "ENDITEM",
		"Name=family_member_ids[0]", "Value={Spouse}", "ENDITEM",
		"Name=family_member_ids[1]", "Value={Child_1}", "ENDITEM",
		"Name=family_member_ids[2]", "Value={Child_2}", "ENDITEM",
		"Name=family_member_ids[3]", "Value={Child_3}", "ENDITEM",
		"Name=coverage_kind", "Value=health", "ENDITEM",
		"Name=market_kind", "Value=shop", "ENDITEM",
		"EXTRARES",
		"URL=plan_shoppings/{plan_shoppings}/plans?change_plan=&amp;coverage_kind=health&amp;enrollment_kind=&amp;market_kind=shop", "Referer=http://enroll-test.dchbx.org/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=&market_kind=shop", "ENDITEM",
		"URL=../assets/logo/carrier/aetna-61b8b10ac6a5945749ae7162bb820fd8.jpg", "Referer=http://enroll-test.dchbx.org/insured/plan_shoppings/{plan_shoppings}?coverage_kind=health&enrollment_kind=&market_kind=shop", "ENDITEM",
		"LAST");
	
	
	lr_end_transaction("EMPLYE_0015_Select_Plan_Continue",2);

	lr_think_time(10);

 

	 
	web_reg_save_param_regexp("ParamName=authenticity_token_4","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");
	
 	

	lr_start_transaction("EMPLYE_0016_Click_Select_Plan");

	web_submit_data("thankyou",
		"Action=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}/thankyou?change_plan=&plan_id={plan_id}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}",
		"Snapshot=t38.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=_method", "Value=post", "ENDITEM",
		"Name=authenticity_token", "Value={authenticity_token_3}", "ENDITEM",
		"LAST");

	lr_end_transaction("EMPLYE_0016_Click_Select_Plan",2);
	
	lr_think_time(10);
	
	 

	 
	web_reg_save_param_regexp("ParamName=authenticity_token_4","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");
	
 	
	
	lr_start_transaction("EMPLYE_0017_Purchase");

	web_submit_data("checkout", 
		"Action=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}/checkout?change_plan=change_plan&plan_id={plan_id}", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}/thankyou?change_plan=change_plan&plan_id={plan_id}", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=_method", "Value=post", "ENDITEM", 
		"Name=authenticity_token", "Value={authenticity_token_4}", "ENDITEM", 
		"LAST");

	lr_end_transaction("EMPLYE_0017_Purchase",2);

	lr_think_time(10);
	
	lr_start_transaction("EMPLYE_0018_Save_and_Exit");

	web_submit_data("sign_out", 
		"Action=http://{enrollAppLandingPage}/users/sign_out", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}/thankyou?change_plan=&plan_id={plan_id}", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=_method", "Value=delete", "ENDITEM", 
		"Name=authenticity_token", "Value={authenticity_token_4}", "ENDITEM", 
		"LAST");

	lr_end_transaction("EMPLYE_0018_Save_and_Exit",2);
	
	lr_think_time(2);
	
	return 0;
}
# 11 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "Add_a_Member.c" 1
Add_a_Member()
{
	
	lr_start_transaction("EMPLYE_0010_Click_on_Add_Member");

	web_url("Add Member",
		"URL=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members/new?family_id={family_id}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/javascript",
		"Referer=http://{enrollAppLandingPage}/{applicationTypeLowerCase}/family_members?employee_role_id={employee_role_id}",
		"Snapshot=t34.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("EMPLYE_0010_Click_on_Add_Member",2);
	
	return 0;
}
# 12 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "Logout.c" 1
Logout()
{
	
	lr_start_transaction("EMPLYE_0100_Logout");
	
 
 
 
 
 
 
 
 
 
 
 
 
	
		web_url("logout", 
		"URL=https://webpp.dchealthlink.com/oam/server/logout?end_url=https://webpp.dchealthlink.com/fed/user/logout?returnurl=https://preprod.dchealthlink.com", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://webpp.dchealthlink.com/oam/server/logout?end_url=https://webpp.dchealthlink.com/fed/user/logout?returnurl=https://preprod.dchealthlink.com", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"LAST");	
	
	lr_end_transaction("EMPLYE_0100_Logout",2);
	
	return 0;
}
# 13 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "GenerateSSNs.c" 1
GenerateSSNs()
{
	SSNGenerator("EmployeeSpouseSSN");
	
		lr_output_message(lr_eval_string("{EmployeeSpouseSSN}"));
	
	SSNGenerator("EmployeeChildOneSSN");
	
		lr_output_message(lr_eval_string("{EmployeeChildOneSSN}"));
		
	SSNGenerator("EmployeeChildTwoSSN");
	
		lr_output_message(lr_eval_string("{EmployeeChildTwoSSN}"));	
	return 0;
}
# 14 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "WorkOutPlanPurchase.c" 1
WorkOutPlanPurchase()
{
	
 
	web_reg_save_param_regexp("ParamName=authenticity_token_2","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");
	
	
	lr_start_transaction("EMPLYE_0018_Shop_For_Plans");

	web_link("Shop for plans Browse plans from carriers in the DC Health Care Exchange.", 
		"Text=Shop for plans Browse plans from carriers in the DC Health Care Exchange.", 
		"Snapshot=t24.inf", 
		"LAST");

	lr_end_transaction("EMPLYE_0018_Shop_For_Plans",2);
	
	lr_think_time(10);
	
 	

 
	web_reg_save_param_regexp("ParamName=plan_shoppings","RegExp=plan_shoppings/(.*?)\\\r\\\n","SEARCH_FILTERS","Scope=Headers","IgnoreRedirections=No","RequestUrl=*/create*","LAST");

 
 

	web_reg_save_param_ex("ParamName=plan_id", "LB=plan_id=", "RB=\">Select Plan", "SEARCH_FILTERS", "LAST" );
	
	 
	web_reg_save_param_regexp("ParamName=authenticity_token_3","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");
	
 	
	lr_think_time(10);
		
	lr_start_transaction("EMPLYE_0019_Select_Plan_Continue_{plan_count}");

	web_submit_data("create",
		"Action=http://{enrollAppLandingPage}/group_selection/create",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/group_selection/new?employee_role_id={employee_role_id}&person_id={person_id}",
		"Snapshot=t37.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=utf8", "Value=?", "ENDITEM",
		"Name=authenticity_token", "Value={authenticity_token_2}", "ENDITEM",
		"Name=person_id", "Value={person_id}", "ENDITEM",
		"Name=employee_role_id", "Value={employee_role_id}", "ENDITEM",
		"Name=coverage_household_id", "Value=", "ENDITEM",
		"Name=family_member_ids[0]", "Value={Spouse}", "ENDITEM",
		"Name=family_member_ids[1]", "Value={Child_1}", "ENDITEM",
		"Name=family_member_ids[2]", "Value={Child_2}", "ENDITEM",
		"Name=family_member_ids[3]", "Value={Child_3}", "ENDITEM",
		"LAST");
	
	lr_end_transaction("EMPLYE_0019_Select_Plan_Continue_{plan_count}",2);

	lr_think_time(10);

 

	 
	web_reg_save_param_regexp("ParamName=authenticity_token_4","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");
	
 	

	lr_start_transaction("EMPLYE_0020_Click_Select_Plan");

	web_submit_data("thankyou",
		"Action=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}/thankyou?change_plan=&plan_id={plan_id}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}",
		"Snapshot=t38.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=_method", "Value=post", "ENDITEM",
		"Name=authenticity_token", "Value={authenticity_token_3}", "ENDITEM",
		"LAST");
	
	lr_end_transaction("EMPLYE_0020_Click_Select_Plan",2);
	
	lr_think_time(10);
 

	 
	web_reg_save_param_regexp("ParamName=authenticity_token_4","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");
	
 	
	
	lr_start_transaction("EMPLYE_0021_Purchase");

	web_submit_data("checkout", 
		"Action=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}/checkout?change_plan=change_plan&plan_id={plan_id}", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{enrollAppLandingPage}/insured/plan_shoppings/{plan_shoppings}/thankyou?change_plan=change_plan&plan_id={plan_id}", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=_method", "Value=post", "ENDITEM", 
		"Name=authenticity_token", "Value={authenticity_token_4}", "ENDITEM", 
		"LAST");

	lr_end_transaction("EMPLYE_0021_Purchase",2);

	lr_think_time(10);

	 
	
	web_add_header ("X-CSRF-Token", "{authenticity_token_5}");
 

	 
	web_reg_save_param_regexp("ParamName=authenticity_token_4","RegExp=\\ content=\"(.*?)\"\\ ","Ordinal=2","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","LAST");
	
 	
	
	lr_start_transaction("EMPLYE_0022_Continue");

	web_link("My Account", 
		"Text=My Account", 
		"Snapshot=t28.inf", 
		"LAST");

	lr_end_transaction("EMPLYE_0022_Continue",2);

	lr_think_time(10);
		
	return 0;
}
# 15 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "SaveSSN.c" 1
SaveSSN()
{
	
	char * filename = "..\\UsedData.dat";
	long file;

	fopen(filename, "a+");
	if ((file = fopen(filename, "a+")) == 0) 
	{
		lr_error_message ("Cannot open %s", file); 
		return -1; 
	}
	
	fprintf(file, "%s\n" ,lr_eval_string("{EmpSSN}"));
	 
	fclose(file);
	
	return 0;
}
# 16 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "ClearUsedEmployees.c" 1
ClearUsedEmployees()
{
	
	char * usedFileName = "..\\UsedData.dat";
	char * sourceFileName = "..\\EmpFName.dat";
	char * tempFileName = "..\\Temp.dat";
		
	long usedFile = fopen(usedFileName, "r");
	long sourceFile = fopen(sourceFileName, "r");
	long tempFile = fopen(tempFileName, "a+");

	char line[1024];
	int writeFlag;
	
	char * usedSSNs[512][11];
	int arrayPosition=0;
		
	if( sourceFile == 0 ){
      perror("Employee list is missing.\n");
      exit(0);
   	}
	
	 
	while (fgets(line,sizeof(line),usedFile)!=0){
		sprintf(usedSSNs[arrayPosition++],"%s", strtok(line,"\n"));
	}
	
	 
	while (fgets(line,sizeof(line),sourceFile)!=0){
		writeFlag=1;
		 
		for(arrayPosition = 0; strlen(usedSSNs[arrayPosition])>9&&arrayPosition<512; arrayPosition++){
			if (strstr(line,usedSSNs[arrayPosition])!=0){
				writeFlag=0;
				break;
			}
		}
		 
		if (writeFlag==1){
			fprintf(tempFile, "%s" ,line);
		}		
	}	
	 
	fclose(usedFile);
	fclose(sourceFile);
	fclose(tempFile);

	 
	remove(sourceFileName);
	rename(tempFileName,sourceFileName);
	fclose(fopen(usedFileName, "w"));

	return 0;
}
# 17 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	
 
	
	return 0;
}
# 18 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedemployeeportal\\\\combined_IntegratedEmployeePortal.c" 2

