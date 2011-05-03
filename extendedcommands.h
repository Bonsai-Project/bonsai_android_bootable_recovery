int __system(const char *command);

int confirm_selection();

void create_fstab();

int do_nandroid_backup(const char* backup_name);

int do_nandroid_restore();

int extendedcommand_file_exists();

int format_unknown_device(const char *device, const char* path, const char *fs_type);

void handle_failure(int ret);

int has_datadata();

int install_zip(const char* packagefilepath);

int is_path_mounted(const char* path);

void process_volumes();

int run_and_remove_extendedcommand();

int run_script_from_buffer(char* script_data, int script_len, char* filename);

extern int script_assert_enabled;

void show_advanced_menu();

void show_choose_zip_menu();

void show_install_update_menu();

void show_nandroid_menu();

void show_nandroid_restore_menu();

void show_partition_menu();

extern int signature_check_enabled;

void toggle_signature_check();

void toggle_script_asserts();

void wipe_battery_stats();

void RegisterRecoveryHooks();


typedef struct {
    char txt[255];
    Volume* v;
} FormatMenuEntry;

typedef struct {
    char mount[255];
    char unmount[255];
    Volume* v;
} MountMenuEntry;




