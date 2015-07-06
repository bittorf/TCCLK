typedef struct {
    int id;
    void * ptr;
    int size;
} tcc_page_t;

typedef struct {
    int num_requested;
    int num_freed;
    int num_in_use;
    int page_size;
} tcc_page_stat_t;

EXTERN tcc_page_t * get_page();

EXTERN void free_page(tcc_page_t*);

EXTERN tcc_page_stat * page_stats();
