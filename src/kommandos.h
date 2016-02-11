/* kommandos.h Kommandos  (c) Markus Hoffmann  */

/* This file is part of X11BASIC, the basic interpreter for Unix/X
 * ============================================================
 * X11BASIC is free software and comes with NO WARRANTY - read the file
 * COPYING for details
 */


void bidnm(char *);
void c_add      (char *);
void c_after    (char *);
void c_arraycopy(char *);
void c_arrayfill(char *);
void c_beep     (char *);
void c_bload    (char *);
void c_bget     (char *);
void c_bmove    (char *);
void c_bput     (char *);
void c_bsave    (char *);
void c_clear    (char *);
void c_clr      (char *);
void c_cls      (char *);
void c_detatch  (char *);
void c_do       (char *);
void c_dpoke    (PARAMETER *,int);
void c_else     (char *);
void c_erase    (char *);
void c_error    (PARAMETER *,int);
void c_eval     (PARAMETER *,int);
void c_every    (char *);
void c_flush    (PARAMETER *,int);
void c_free     (PARAMETER *,int);
void c_help     (char *);
void c_lpoke    (PARAMETER *,int);
void c_local    (char *);
void c_locate   (PARAMETER *,int);
void c_nop       (char *);
void c_objc_add   (PARAMETER *,int);
void c_objc_delete (PARAMETER *,int);
void c_pause      (char *);
void c_poke      (PARAMETER *,int);
void c_print    (char *);
void c_quit     (PARAMETER *,int);
void c_rsrc_free(char *);
void c_rsrc_load(char *);
void c_shm_free (PARAMETER *,int);
void c_sound    (PARAMETER *,int);
void c_stop     (char *);
void c_sub      (char *);
void c_swap     (char *);
void c_troff    (char *);
void c_tron     (char *);
void c_unget    (char *);
void c_version  (char *);
void c_void     (char *);
void c_wort_sep (char *);


void c_mul(char *);
void c_exit(char *);
void c_div(char *),c_dec(PARAMETER *,int),c_dim(char *);
void c_loop(char *);
void c_chain(char *);
void c_while(char *),c_echo(char *),c_end(char *),c_edit(char *),c_save(char *);
void c_return(char *),c_for(char *),c_inc(PARAMETER *,int);
void c_if(char *),c_sort(char *);
void c_fft(char *);
void c_fit(char *);
void c_fit_linear(char *);
void c_load(char *),c_goto(char *),c_gosub(char *);
void c_merge(char *),c_home(char *),c_input(char *);
void c_new(char *),c_read(char *),c_cont(char *);
void c_wend(char *),c_next(char *),c_until(char *),c_break(char *);
void c_run(char *),c_list(PARAMETER *,int),c_plist(char *),c_out(char *);
void c_dump(char *),c_open(char *),c_close(char *),c_lineinput(char *);
void c_dolocal(char *,char *);
void c_onbreak(char *),c_seek(char *),c_relseek(char *);
void c_link(PARAMETER *,int),c_randomize(PARAMETER *,int),c_exec(char *);
void c_onmenu(char *),c_case(char *),c_select(char *),c_endselect(char *);
void c_onerror(char *),c_system(char *),c_let(char *);
void c_on(char *);
void c_restore(char *);

void c_addsubmuldiv(char *,int);