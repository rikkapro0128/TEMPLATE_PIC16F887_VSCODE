#define __NR_restart_syscall      0
#define __NR_exit		  1
#define __NR_fork		  2
#define __NR_read		  3
#define __NR_write		  4
#define __NR_open		  5
#define __NR_close		  6
#define __NR_waitpid		  7
#define __NR_creat		  8
#define __NR_link		  9
#define __NR_unlink		 10
#define __NR_execve		 11
#define __NR_chdir		 12
#define __NR_time		 13
#define __NR_mknod		 14
#define __NR_chmod		 15
#define __NR_lchown		 16
#define __NR_break		 17
#define __NR_oldstat		 18
#define __NR_lseek		 19
#define __NR_getpid		 20
#define __NR_mount		 21
#define __NR_umount		 22
#define __NR_setuid		 23
#define __NR_getuid		 24
#define __NR_stime		 25
#define __NR_ptrace		 26
#define __NR_alarm		 27
#define __NR_oldfstat		 28
#define __NR_pause		 29
#define __NR_utime		 30
#define __NR_stty		 31
#define __NR_gtty		 32
#define __NR_access		 33
#define __NR_nice		 34
#define __NR_ftime		 35
#define __NR_sync		 36
#define __NR_kill		 37
#define __NR_rename		 38
#define __NR_mkdir		 39
#define __NR_rmdir		 40
#define __NR_dup		 41
#define __NR_pipe		 42
#define __NR_times		 43
#define __NR_prof		 44
#define __NR_brk		 45
#define __NR_setgid		 46
#define __NR_getgid		 47
#define __NR_signal		 48
#define __NR_geteuid		 49
#define __NR_getegid		 50
#define __NR_acct		 51
#define __NR_umount2		 52
#define __NR_lock		 53
#define __NR_ioctl		 54
#define __NR_fcntl		 55
#define __NR_mpx		 56
#define __NR_setpgid		 57
#define __NR_ulimit		 58
#define __NR_oldolduname	 59
#define __NR_umask		 60
#define __NR_chroot		 61
#define __NR_ustat		 62
#define __NR_dup2		 63
#define __NR_getppid		 64
#define __NR_getpgrp		 65
#define __NR_setsid		 66
#define __NR_sigaction		 67
#define __NR_sgetmask		 68
#define __NR_ssetmask		 69
#define __NR_setreuid		 70
#define __NR_setregid		 71
#define __NR_sigsuspend		 72
#define __NR_sigpending		 73
#define __NR_sethostname	 74
#define __NR_setrlimit		 75
#define __NR_getrlimit		 76   /* Back compatible 2Gig limited rlimit */
#define __NR_getrusage		 77
#define __NR_gettimeofday	 78
#define __NR_settimeofday	 79
#define __NR_getgroups		 80
#define __NR_setgroups		 81
#define __NR_select		 82
#define __NR_symlink		 83
#define __NR_oldlstat		 84
#define __NR_readlink		 85
#define __NR_uselib		 86
#define __NR_swapon		 87
#define __NR_reboot		 88
#define __NR_readdir		 89
#define __NR_mmap		 90
#define __NR_munmap		 91
#define __NR_truncate		 92
#define __NR_ftruncate		 93
#define __NR_fchmod		 94
#define __NR_fchown		 95
#define __NR_getpriority	 96
#define __NR_setpriority	 97
#define __NR_profil		 98
#define __NR_statfs		99
#define __NR_fstatfs		100
#define __NR_ioperm		101
#define __NR_socketcall		102
#define __NR_syslog		103
#define __NR_setitimer		104
#define __NR_getitimer		105
#define __NR_stat		106
#define __NR_lstat		107
#define __NR_fstat		108
#define __NR_olduname		109
#define __NR_iopl		110
#define __NR_vhangup		111
#define __NR_idle		112
#define __NR_vm86old		113
#define __NR_wait4		114
#define __NR_swapoff		115
#define __NR_sysinfo		116
#define __NR_ipc		117
#define __NR_fsync		118
#define __NR_sigreturn		119
#define __NR_clone		120
#define __NR_setdomainname	121
#define __NR_uname		122
#define __NR_modify_ldt		123
#define __NR_adjtimex		124
#define __NR_mprotect		125
#define __NR_sigprocmask	126
#define __NR_create_module	127
#define __NR_init_module	128
#define __NR_delete_module	129
#define __NR_get_kernel_syms	130
#define __NR_quotactl		131
#define __NR_getpgid		132
#define __NR_fchdir		133
#define __NR_bdflush		134
#define __NR_sysfs		135
#define __NR_personality	136
#define __NR_afs_syscall	137
#define __NR_setfsuid		138
#define __NR_setfsgid		139
#define __NR__llseek		140
#define __NR_getdents		141
#define __NR__newselect		142
#define __NR_flock		143
#define __NR_msync		144
#define __NR_readv		145
#define __NR_writev		146
#define __NR_getsid		147
#define __NR_fdatasync		148
#define __NR__sysctl		149
#define __NR_mlock		150
#define __NR_munlock		151
#define __NR_mlockall		152
#define __NR_munlockall		153
#define __NR_sched_setparam		154
#define __NR_sched_getparam		155
#define __NR_sched_setscheduler		156
#define __NR_sched_getscheduler		157
#define __NR_sched_yield		158
#define __NR_sched_get_priority_max	159
#define __NR_sched_get_priority_min	160
#define __NR_sched_rr_get_interval	161
#define __NR_nanosleep		162
#define __NR_mremap		163
#define __NR_setresuid		164
#define __NR_getresuid		165
#define __NR_vm86		166
#define __NR_query_module	167
#define __NR_poll		168
#define __NR_nfsservctl		169
#define __NR_setresgid		170
#define __NR_getresgid		171
#define __NR_prctl              172
#define __NR_rt_sigreturn	173
#define __NR_rt_sigaction	174
#define __NR_rt_sigprocmask	175
#define __NR_rt_sigpending	176
#define __NR_rt_sigtimedwait	177
#define __NR_rt_sigqueueinfo	178
#define __NR_rt_sigsuspend	179
#define __NR_pread64		180
#define __NR_pwrite64		181
#define __NR_chown		182
#define __NR_getcwd		183
#define __NR_capget		184
#define __NR_capset		185
#define __NR_sigaltstack	186
#define __NR_sendfile		187
#define __NR_getpmsg		188
#define __NR_putpmsg		189
#define __NR_vfork		190
#define __NR_ugetrlimit		191
#define __NR_mmap2		192
#define __NR_truncate64		193
#define __NR_ftruncate64	194
#define __NR_stat64		195
#define __NR_lstat64		196
#define __NR_fstat64		197
#define __NR_lchown32		198
#define __NR_getuid32		199
#define __NR_getgid32		200
#define __NR_geteuid32		201
#define __NR_getegid32		202
#define __NR_setreuid32		203
#define __NR_setregid32		204
#define __NR_getgroups32	205
#define __NR_setgroups32	206
#define __NR_fchown32		207
#define __NR_setresuid32	208
#define __NR_getresuid32	209
#define __NR_setresgid32	210
#define __NR_getresgid32	211
#define __NR_chown32		212
#define __NR_setuid32		213
#define __NR_setgid32		214
#define __NR_setfsuid32		215
#define __NR_setfsgid32		216
#define __NR_pivot_root		217
#define __NR_mincore		218
#define __NR_madvise		219
#define __NR_getdents64		220
#define __NR_fcntl64		221
/* 223 is unused */
#define __NR_gettid		224
#define __NR_readahead		225
#define __NR_setxattr		226
#define __NR_lsetxattr		227
#define __NR_fsetxattr		228
#define __NR_getxattr		229
#define __NR_lgetxattr		230
#define __NR_fgetxattr		231
#define __NR_listxattr		232
#define __NR_llistxattr		233
#define __NR_flistxattr		234
#define __NR_removexattr	235
#define __NR_lremovexattr	236
#define __NR_fremovexattr	237
#define __NR_tkill		238
#define __NR_sendfile64		239
#define __NR_futex		240
#define __NR_sched_setaffinity	241
#define __NR_sched_getaffinity	242
#define __NR_set_thread_area	243
#define __NR_get_thread_area	244
#define __NR_io_setup		245
#define __NR_io_destroy		246
#define __NR_io_getevents	247
#define __NR_io_submit		248
#define __NR_io_cancel		249
#define __NR_fadvise64		250
/* 251 is available for reuse (was briefly sys_set_zone_reclaim) */
#define __NR_exit_group		252
#define __NR_lookup_dcookie	253
#define __NR_epoll_create	254
#define __NR_epoll_ctl		255
#define __NR_epoll_wait		256
#define __NR_remap_file_pages	257
#define __NR_set_tid_address	258
#define __NR_timer_create	259
#define __NR_timer_settime	260
#define __NR_timer_gettime	261
#define __NR_timer_getoverrun	262
#define __NR_timer_delete	263 
#define __NR_clock_settime	264
#define __NR_clock_gettime	265
#define __NR_clock_getres	266
#define __NR_clock_nanosleep	267
#define __NR_statfs64		268
#define __NR_fstatfs64		269
#define __NR_tgkill		270
#define __NR_utimes		271
#define __NR_fadvise64_64	272
#define __NR_vserver		273
#define __NR_mbind		274
#define __NR_get_mempolicy	275
#define __NR_set_mempolicy	276
#define __NR_mq_open 		277
#define __NR_mq_unlink		278
#define __NR_mq_timedsend	279
#define __NR_mq_timedreceive	280
#define __NR_mq_notify		281
#define __NR_mq_getsetattr	282
#define __NR_kexec_load		283
#define __NR_waitid		284
/* #define __NR_sys_setaltroot	285 */
#define __NR_add_key		286
#define __NR_request_key	287
#define __NR_keyctl		288
#define __NR_ioprio_set		289
#define __NR_ioprio_get		290
#define __NR_inotify_init	291
#define __NR_inotify_add_watch	292
#define __NR_inotify_rm_watch	293
#define __NR_migrate_pages	294
#define __NR_openat		295
#define __NR_mkdirat		296
#define __NR_mknodat		297
#define __NR_fchownat		298
#define __NR_futimesat		299
#define __NR_fstatat64		300
#define __NR_unlinkat		301
#define __NR_renameat		302
#define __NR_linkat		303
#define __NR_symlinkat		304
#define __NR_readlinkat		305
#define __NR_fchmodat		306
#define __NR_faccessat		307
#define __NR_pselect6		308
#define __NR_ppoll		309
#define __NR_unshare		310
#define __NR_set_robust_list	311
#define __NR_get_robust_list	312
#define __NR_splice		313
#define __NR_sync_file_range	314
#define __NR_tee		315
#define __NR_vmsplice		316
#define __NR_move_pages		317
#define __NR_getcpu		318
#define __NR_epoll_pwait	319
#define __NR_utimensat		320
#define __NR_signalfd		321
#define __NR_timerfd_create	322
#define __NR_eventfd		323
#define __NR_fallocate		324
#define __NR_timerfd_settime	325
#define __NR_timerfd_gettime	326
#define __NR_signalfd4		327
#define __NR_eventfd2		328
#define __NR_epoll_create1	329
#define __NR_dup3		330
#define __NR_pipe2		331
#define __NR_inotify_init1	332
#define __NR_preadv		333
#define __NR_pwritev		334
#define __NR_rt_tgsigqueueinfo	335
#define __NR_perf_event_open	336
#define __NR_recvmmsg		337
#define __NR_fanotify_init	338
#define __NR_fanotify_mark	339
#define __NR_prlimit64		340
#define __NR_name_to_handle_at	341
#define __NR_open_by_handle_at	342
#define __NR_clock_adjtime	343
#define __NR_syncfs		344
#define __NR_sendmmsg		345
#define __NR_setns		346
#define __NR_process_vm_readv	347
#define __NR_process_vm_writev	348
#define __NR_kcmp		349
#define __NR_finit_module	350
#define __NR_sched_setattr	351
#define __NR_sched_getattr	352
#define __NR_renameat2		353
#define __NR_seccomp		354
#define __NR_getrandom		355
#define __NR_memfd_create	356
#define __NR_bpf		357
#define __NR_execveat		358
#define __NR_socket		359
#define __NR_socketpair		360
#define __NR_bind		361
#define __NR_connect		362
#define __NR_listen		363
#define __NR_accept4		364
#define __NR_getsockopt		365
#define __NR_setsockopt		366
#define __NR_getsockname	367
#define __NR_getpeername	368
#define __NR_sendto		369
#define __NR_sendmsg		370
#define __NR_recvfrom		371
#define __NR_recvmsg		372
#define __NR_shutdown		373
#define __NR_userfaultfd	374
#define __NR_membarrier		375
#define __NR_mlock2		376
#define __NR_copy_file_range	377
#define __NR_preadv2		378
#define __NR_pwritev2		379
#define __NR_pkey_mprotect	380
#define __NR_pkey_alloc		381
#define __NR_pkey_free		382

extern long _syscall_0();
extern long _syscall_1();
extern long _syscall_2();
extern long _syscall_3();
extern long _syscall_4();
extern long _syscall_5();
extern long _syscall_6();
extern long _syscall_7();
extern long _syscall_8();
extern long _syscall_9();
extern long _syscall_10();
extern long _syscall_11();
extern long _syscall_12();
extern long _syscall_13();
extern long _syscall_14();
extern long _syscall_15();
extern long _syscall_16();
extern long _syscall_17();
extern long _syscall_18();
extern long _syscall_19();
extern long _syscall_20();
extern long _syscall_21();
extern long _syscall_22();
extern long _syscall_23();
extern long _syscall_24();
extern long _syscall_25();
extern long _syscall_26();
extern long _syscall_27();
extern long _syscall_28();
extern long _syscall_29();
extern long _syscall_30();
extern long _syscall_31();
extern long _syscall_32();
extern long _syscall_33();
extern long _syscall_34();
extern long _syscall_35();
extern long _syscall_36();
extern long _syscall_37();
extern long _syscall_38();
extern long _syscall_39();
extern long _syscall_40();
extern long _syscall_41();
extern long _syscall_42();
extern long _syscall_43();
extern long _syscall_44();
extern long _syscall_45();
extern long _syscall_46();
extern long _syscall_47();
extern long _syscall_48();
extern long _syscall_49();
extern long _syscall_50();
extern long _syscall_51();
extern long _syscall_52();
extern long _syscall_53();
extern long _syscall_54();
extern long _syscall_55();
extern long _syscall_56();
extern long _syscall_57();
extern long _syscall_58();
extern long _syscall_59();
extern long _syscall_60();
extern long _syscall_61();
extern long _syscall_62();
extern long _syscall_63();
extern long _syscall_64();
extern long _syscall_65();
extern long _syscall_66();
extern long _syscall_67();
extern long _syscall_68();
extern long _syscall_69();
extern long _syscall_70();
extern long _syscall_71();
extern long _syscall_72();
extern long _syscall_73();
extern long _syscall_74();
extern long _syscall_75();
extern long _syscall_76();
extern long _syscall_77();
extern long _syscall_78();
extern long _syscall_79();
extern long _syscall_80();
extern long _syscall_81();
extern long _syscall_82();
extern long _syscall_83();
extern long _syscall_84();
extern long _syscall_85();
extern long _syscall_86();
extern long _syscall_87();
extern long _syscall_88();
extern long _syscall_89();
extern long _syscall_90();
extern long _syscall_91();
extern long _syscall_92();
extern long _syscall_93();
extern long _syscall_94();
extern long _syscall_95();
extern long _syscall_96();
extern long _syscall_97();
extern long _syscall_98();
extern long _syscall_99();
extern long _syscall_100();
extern long _syscall_101();
extern long _syscall_102();
extern long _syscall_103();
extern long _syscall_104();
extern long _syscall_105();
extern long _syscall_106();
extern long _syscall_107();
extern long _syscall_108();
extern long _syscall_109();
extern long _syscall_110();
extern long _syscall_111();
extern long _syscall_112();
extern long _syscall_113();
extern long _syscall_114();
extern long _syscall_115();
extern long _syscall_116();
extern long _syscall_117();
extern long _syscall_118();
extern long _syscall_119();
extern long _syscall_120();
extern long _syscall_121();
extern long _syscall_122();
extern long _syscall_123();
extern long _syscall_124();
extern long _syscall_125();
extern long _syscall_126();
extern long _syscall_127();
extern long _syscall_128();
extern long _syscall_129();
extern long _syscall_130();
extern long _syscall_131();
extern long _syscall_132();
extern long _syscall_133();
extern long _syscall_134();
extern long _syscall_135();
extern long _syscall_136();
extern long _syscall_137();
extern long _syscall_138();
extern long _syscall_139();
extern long _syscall_140();
extern long _syscall_141();
extern long _syscall_142();
extern long _syscall_143();
extern long _syscall_144();
extern long _syscall_145();
extern long _syscall_146();
extern long _syscall_147();
extern long _syscall_148();
extern long _syscall_149();
extern long _syscall_150();
extern long _syscall_151();
extern long _syscall_152();
extern long _syscall_153();
extern long _syscall_154();
extern long _syscall_155();
extern long _syscall_156();
extern long _syscall_157();
extern long _syscall_158();
extern long _syscall_159();
extern long _syscall_160();
extern long _syscall_161();
extern long _syscall_162();
extern long _syscall_163();
extern long _syscall_164();
extern long _syscall_165();
extern long _syscall_166();
extern long _syscall_167();
extern long _syscall_168();
extern long _syscall_169();
extern long _syscall_170();
extern long _syscall_171();
extern long _syscall_172();
extern long _syscall_173();
extern long _syscall_174();
extern long _syscall_175();
extern long _syscall_176();
extern long _syscall_177();
extern long _syscall_178();
extern long _syscall_179();
extern long _syscall_180();
extern long _syscall_181();
extern long _syscall_182();
extern long _syscall_183();
extern long _syscall_184();
extern long _syscall_185();
extern long _syscall_186();
extern long _syscall_187();
extern long _syscall_188();
extern long _syscall_189();
extern long _syscall_190();
extern long _syscall_191();
extern long _syscall_192();
extern long _syscall_193();
extern long _syscall_194();
extern long _syscall_195();
extern long _syscall_196();
extern long _syscall_197();
extern long _syscall_198();
extern long _syscall_199();
extern long _syscall_200();
extern long _syscall_201();
extern long _syscall_202();
extern long _syscall_203();
extern long _syscall_204();
extern long _syscall_205();
extern long _syscall_206();
extern long _syscall_207();
extern long _syscall_208();
extern long _syscall_209();
extern long _syscall_210();
extern long _syscall_211();
extern long _syscall_212();
extern long _syscall_213();
extern long _syscall_214();
extern long _syscall_215();
extern long _syscall_216();
extern long _syscall_217();
extern long _syscall_218();
extern long _syscall_219();
extern long _syscall_220();
extern long _syscall_221();
extern long _syscall_222();
extern long _syscall_223();
extern long _syscall_224();
extern long _syscall_225();
extern long _syscall_226();
extern long _syscall_227();
extern long _syscall_228();
extern long _syscall_229();
extern long _syscall_230();
extern long _syscall_231();
extern long _syscall_232();
extern long _syscall_233();
extern long _syscall_234();
extern long _syscall_235();
extern long _syscall_236();
extern long _syscall_237();
extern long _syscall_238();
extern long _syscall_239();
extern long _syscall_240();
extern long _syscall_241();
extern long _syscall_242();
extern long _syscall_243();
extern long _syscall_244();
extern long _syscall_245();
extern long _syscall_246();
extern long _syscall_247();
extern long _syscall_248();
extern long _syscall_249();
extern long _syscall_250();
extern long _syscall_251();
extern long _syscall_252();
extern long _syscall_253();
extern long _syscall_254();
extern long _syscall_255();
extern long _syscall_256();
extern long _syscall_257();
extern long _syscall_258();
extern long _syscall_259();
extern long _syscall_260();
extern long _syscall_261();
extern long _syscall_262();
extern long _syscall_263();
extern long _syscall_264();
extern long _syscall_265();
extern long _syscall_266();
extern long _syscall_267();
extern long _syscall_268();
extern long _syscall_269();
extern long _syscall_270();
extern long _syscall_271();
extern long _syscall_272();
extern long _syscall_273();
extern long _syscall_274();
extern long _syscall_275();
extern long _syscall_276();
extern long _syscall_277();
extern long _syscall_278();
extern long _syscall_279();
extern long _syscall_280();
extern long _syscall_281();
extern long _syscall_282();
extern long _syscall_283();
extern long _syscall_284();
extern long _syscall_285();
extern long _syscall_286();
extern long _syscall_287();
extern long _syscall_288();
extern long _syscall_289();
extern long _syscall_290();
extern long _syscall_291();
extern long _syscall_292();
extern long _syscall_293();
extern long _syscall_294();
extern long _syscall_295();
extern long _syscall_296();
extern long _syscall_297();
extern long _syscall_298();
extern long _syscall_299();
extern long _syscall_300();
extern long _syscall_301();
extern long _syscall_302();
extern long _syscall_303();
extern long _syscall_304();
extern long _syscall_305();
extern long _syscall_306();
extern long _syscall_307();
extern long _syscall_308();
extern long _syscall_309();
extern long _syscall_310();
extern long _syscall_311();
extern long _syscall_312();
extern long _syscall_313();
extern long _syscall_314();
extern long _syscall_315();
extern long _syscall_316();
extern long _syscall_317();
extern long _syscall_318();
extern long _syscall_319();
extern long _syscall_320();
extern long _syscall_321();
extern long _syscall_322();
extern long _syscall_323();
extern long _syscall_324();
extern long _syscall_325();
extern long _syscall_326();
extern long _syscall_327();
extern long _syscall_328();
extern long _syscall_329();
extern long _syscall_330();
extern long _syscall_331();
extern long _syscall_332();
extern long _syscall_333();
extern long _syscall_334();
extern long _syscall_335();
extern long _syscall_336();
extern long _syscall_337();
extern long _syscall_338();
extern long _syscall_339();
extern long _syscall_340();
extern long _syscall_341();
extern long _syscall_342();
extern long _syscall_343();
extern long _syscall_344();
extern long _syscall_345();
extern long _syscall_346();
extern long _syscall_347();
extern long _syscall_348();
extern long _syscall_349();
extern long _syscall_350();
extern long _syscall_351();
extern long _syscall_352();
extern long _syscall_353();
extern long _syscall_354();
extern long _syscall_355();
extern long _syscall_356();
extern long _syscall_357();
extern long _syscall_358();
extern long _syscall_359();
extern long _syscall_360();
extern long _syscall_361();
extern long _syscall_362();
extern long _syscall_363();
extern long _syscall_364();
extern long _syscall_365();
extern long _syscall_366();
extern long _syscall_367();
extern long _syscall_368();
extern long _syscall_369();
extern long _syscall_370();
extern long _syscall_371();
extern long _syscall_372();
extern long _syscall_373();
extern long _syscall_374();
extern long _syscall_375();
extern long _syscall_376();
extern long _syscall_377();
extern long _syscall_378();
extern long _syscall_379();
extern long _syscall_380();
extern long _syscall_381();
extern long _syscall_382();
#define SYS_restart_syscall      0
#define SYS_exit		  1
#define SYS_fork		  2
#define SYS_read		  3
#define SYS_write		  4
#define SYS_open		  5
#define SYS_close		  6
#define SYS_waitpid		  7
#define SYS_creat		  8
#define SYS_link		  9
#define SYS_unlink		 10
#define SYS_execve		 11
#define SYS_chdir		 12
#define SYS_time		 13
#define SYS_mknod		 14
#define SYS_chmod		 15
#define SYS_lchown		 16
#define SYS_break		 17
#define SYS_oldstat		 18
#define SYS_lseek		 19
#define SYS_getpid		 20
#define SYS_mount		 21
#define SYS_umount		 22
#define SYS_setuid		 23
#define SYS_getuid		 24
#define SYS_stime		 25
#define SYS_ptrace		 26
#define SYS_alarm		 27
#define SYS_oldfstat		 28
#define SYS_pause		 29
#define SYS_utime		 30
#define SYS_stty		 31
#define SYS_gtty		 32
#define SYS_access		 33
#define SYS_nice		 34
#define SYS_ftime		 35
#define SYS_sync		 36
#define SYS_kill		 37
#define SYS_rename		 38
#define SYS_mkdir		 39
#define SYS_rmdir		 40
#define SYS_dup		 41
#define SYS_pipe		 42
#define SYS_times		 43
#define SYS_prof		 44
#define SYS_brk		 45
#define SYS_setgid		 46
#define SYS_getgid		 47
#define SYS_signal		 48
#define SYS_geteuid		 49
#define SYS_getegid		 50
#define SYS_acct		 51
#define SYS_umount2		 52
#define SYS_lock		 53
#define SYS_ioctl		 54
#define SYS_fcntl		 55
#define SYS_mpx		 56
#define SYS_setpgid		 57
#define SYS_ulimit		 58
#define SYS_oldolduname	 59
#define SYS_umask		 60
#define SYS_chroot		 61
#define SYS_ustat		 62
#define SYS_dup2		 63
#define SYS_getppid		 64
#define SYS_getpgrp		 65
#define SYS_setsid		 66
#define SYS_sigaction		 67
#define SYS_sgetmask		 68
#define SYS_ssetmask		 69
#define SYS_setreuid		 70
#define SYS_setregid		 71
#define SYS_sigsuspend		 72
#define SYS_sigpending		 73
#define SYS_sethostname	 74
#define SYS_setrlimit		 75
#define SYS_getrlimit		 76   /* Back compatible 2Gig limited rlimit */
#define SYS_getrusage		 77
#define SYS_gettimeofday	 78
#define SYS_settimeofday	 79
#define SYS_getgroups		 80
#define SYS_setgroups		 81
#define SYS_select		 82
#define SYS_symlink		 83
#define SYS_oldlstat		 84
#define SYS_readlink		 85
#define SYS_uselib		 86
#define SYS_swapon		 87
#define SYS_reboot		 88
#define SYS_readdir		 89
#define SYS_mmap		 90
#define SYS_munmap		 91
#define SYS_truncate		 92
#define SYS_ftruncate		 93
#define SYS_fchmod		 94
#define SYS_fchown		 95
#define SYS_getpriority	 96
#define SYS_setpriority	 97
#define SYS_profil		 98
#define SYS_statfs		99
#define SYS_fstatfs		100
#define SYS_ioperm		101
#define SYS_socketcall		102
#define SYS_syslog		103
#define SYS_setitimer		104
#define SYS_getitimer		105
#define SYS_stat		106
#define SYS_lstat		107
#define SYS_fstat		108
#define SYS_olduname		109
#define SYS_iopl		110
#define SYS_vhangup		111
#define SYS_idle		112
#define SYS_vm86old		113
#define SYS_wait4		114
#define SYS_swapoff		115
#define SYS_sysinfo		116
#define SYS_ipc		117
#define SYS_fsync		118
#define SYS_sigreturn		119
#define SYS_clone		120
#define SYS_setdomainname	121
#define SYS_uname		122
#define SYS_modify_ldt		123
#define SYS_adjtimex		124
#define SYS_mprotect		125
#define SYS_sigprocmask	126
#define SYS_create_module	127
#define SYS_init_module	128
#define SYS_delete_module	129
#define SYS_get_kernel_syms	130
#define SYS_quotactl		131
#define SYS_getpgid		132
#define SYS_fchdir		133
#define SYS_bdflush		134
#define SYS_sysfs		135
#define SYS_personality	136
#define SYS_afs_syscall	137
#define SYS_setfsuid		138
#define SYS_setfsgid		139
#define SYS__llseek		140
#define SYS_getdents		141
#define SYS__newselect		142
#define SYS_flock		143
#define SYS_msync		144
#define SYS_readv		145
#define SYS_writev		146
#define SYS_getsid		147
#define SYS_fdatasync		148
#define SYS__sysctl		149
#define SYS_mlock		150
#define SYS_munlock		151
#define SYS_mlockall		152
#define SYS_munlockall		153
#define SYS_sched_setparam		154
#define SYS_sched_getparam		155
#define SYS_sched_setscheduler		156
#define SYS_sched_getscheduler		157
#define SYS_sched_yield		158
#define SYS_sched_get_priority_max	159
#define SYS_sched_get_priority_min	160
#define SYS_sched_rr_get_interval	161
#define SYS_nanosleep		162
#define SYS_mremap		163
#define SYS_setresuid		164
#define SYS_getresuid		165
#define SYS_vm86		166
#define SYS_query_module	167
#define SYS_poll		168
#define SYS_nfsservctl		169
#define SYS_setresgid		170
#define SYS_getresgid		171
#define SYS_prctl              172
#define SYS_rt_sigreturn	173
#define SYS_rt_sigaction	174
#define SYS_rt_sigprocmask	175
#define SYS_rt_sigpending	176
#define SYS_rt_sigtimedwait	177
#define SYS_rt_sigqueueinfo	178
#define SYS_rt_sigsuspend	179
#define SYS_pread64		180
#define SYS_pwrite64		181
#define SYS_chown		182
#define SYS_getcwd		183
#define SYS_capget		184
#define SYS_capset		185
#define SYS_sigaltstack	186
#define SYS_sendfile		187
#define SYS_getpmsg		188
#define SYS_putpmsg		189
#define SYS_vfork		190
#define SYS_ugetrlimit		191
#define SYS_mmap2		192
#define SYS_truncate64		193
#define SYS_ftruncate64	194
#define SYS_stat64		195
#define SYS_lstat64		196
#define SYS_fstat64		197
#define SYS_lchown32		198
#define SYS_getuid32		199
#define SYS_getgid32		200
#define SYS_geteuid32		201
#define SYS_getegid32		202
#define SYS_setreuid32		203
#define SYS_setregid32		204
#define SYS_getgroups32	205
#define SYS_setgroups32	206
#define SYS_fchown32		207
#define SYS_setresuid32	208
#define SYS_getresuid32	209
#define SYS_setresgid32	210
#define SYS_getresgid32	211
#define SYS_chown32		212
#define SYS_setuid32		213
#define SYS_setgid32		214
#define SYS_setfsuid32		215
#define SYS_setfsgid32		216
#define SYS_pivot_root		217
#define SYS_mincore		218
#define SYS_madvise		219
#define SYS_getdents64		220
#define SYS_fcntl64		221
#define SYS_gettid		224
#define SYS_readahead		225
#define SYS_setxattr		226
#define SYS_lsetxattr		227
#define SYS_fsetxattr		228
#define SYS_getxattr		229
#define SYS_lgetxattr		230
#define SYS_fgetxattr		231
#define SYS_listxattr		232
#define SYS_llistxattr		233
#define SYS_flistxattr		234
#define SYS_removexattr	235
#define SYS_lremovexattr	236
#define SYS_fremovexattr	237
#define SYS_tkill		238
#define SYS_sendfile64		239
#define SYS_futex		240
#define SYS_sched_setaffinity	241
#define SYS_sched_getaffinity	242
#define SYS_set_thread_area	243
#define SYS_get_thread_area	244
#define SYS_io_setup		245
#define SYS_io_destroy		246
#define SYS_io_getevents	247
#define SYS_io_submit		248
#define SYS_io_cancel		249
#define SYS_fadvise64		250
#define SYS_exit_group		252
#define SYS_lookup_dcookie	253
#define SYS_epoll_create	254
#define SYS_epoll_ctl		255
#define SYS_epoll_wait		256
#define SYS_remap_file_pages	257
#define SYS_set_tid_address	258
#define SYS_timer_create	259
#define SYS_timer_settime	260
#define SYS_timer_gettime	261
#define SYS_timer_getoverrun	262
#define SYS_timer_delete	263 
#define SYS_clock_settime	264
#define SYS_clock_gettime	265
#define SYS_clock_getres	266
#define SYS_clock_nanosleep	267
#define SYS_statfs64		268
#define SYS_fstatfs64		269
#define SYS_tgkill		270
#define SYS_utimes		271
#define SYS_fadvise64_64	272
#define SYS_vserver		273
#define SYS_mbind		274
#define SYS_get_mempolicy	275
#define SYS_set_mempolicy	276
#define SYS_mq_open 		277
#define SYS_mq_unlink		278
#define SYS_mq_timedsend	279
#define SYS_mq_timedreceive	280
#define SYS_mq_notify		281
#define SYS_mq_getsetattr	282
#define SYS_kexec_load		283
#define SYS_waitid		284
/* #define SYS_sys_setaltroot	285 */
#define SYS_add_key		286
#define SYS_request_key	287
#define SYS_keyctl		288
#define SYS_ioprio_set		289
#define SYS_ioprio_get		290
#define SYS_inotify_init	291
#define SYS_inotify_add_watch	292
#define SYS_inotify_rm_watch	293
#define SYS_migrate_pages	294
#define SYS_openat		295
#define SYS_mkdirat		296
#define SYS_mknodat		297
#define SYS_fchownat		298
#define SYS_futimesat		299
#define SYS_fstatat64		300
#define SYS_unlinkat		301
#define SYS_renameat		302
#define SYS_linkat		303
#define SYS_symlinkat		304
#define SYS_readlinkat		305
#define SYS_fchmodat		306
#define SYS_faccessat		307
#define SYS_pselect6		308
#define SYS_ppoll		309
#define SYS_unshare		310
#define SYS_set_robust_list	311
#define SYS_get_robust_list	312
#define SYS_splice		313
#define SYS_sync_file_range	314
#define SYS_tee		315
#define SYS_vmsplice		316
#define SYS_move_pages		317
#define SYS_getcpu		318
#define SYS_epoll_pwait	319
#define SYS_utimensat		320
#define SYS_signalfd		321
#define SYS_timerfd_create	322
#define SYS_eventfd		323
#define SYS_fallocate		324
#define SYS_timerfd_settime	325
#define SYS_timerfd_gettime	326
#define SYS_signalfd4		327
#define SYS_eventfd2		328
#define SYS_epoll_create1	329
#define SYS_dup3		330
#define SYS_pipe2		331
#define SYS_inotify_init1	332
#define SYS_preadv		333
#define SYS_pwritev		334
#define SYS_rt_tgsigqueueinfo	335
#define SYS_perf_event_open	336
#define SYS_recvmmsg		337
#define SYS_fanotify_init	338
#define SYS_fanotify_mark	339
#define SYS_prlimit64		340
#define SYS_name_to_handle_at	341
#define SYS_open_by_handle_at	342
#define SYS_clock_adjtime	343
#define SYS_syncfs		344
#define SYS_sendmmsg		345
#define SYS_setns		346
#define SYS_process_vm_readv	347
#define SYS_process_vm_writev	348
#define SYS_kcmp		349
#define SYS_finit_module	350
#define SYS_sched_setattr	351
#define SYS_sched_getattr	352
#define SYS_renameat2		353
#define SYS_seccomp		354
#define SYS_getrandom		355
#define SYS_memfd_create	356
#define SYS_bpf		357
#define SYS_execveat		358
#define SYS_socket		359
#define SYS_socketpair		360
#define SYS_bind		361
#define SYS_connect		362
#define SYS_listen		363
#define SYS_accept4		364
#define SYS_getsockopt		365
#define SYS_setsockopt		366
#define SYS_getsockname	367
#define SYS_getpeername	368
#define SYS_sendto		369
#define SYS_sendmsg		370
#define SYS_recvfrom		371
#define SYS_recvmsg		372
#define SYS_shutdown		373
#define SYS_userfaultfd	374
#define SYS_membarrier		375
#define SYS_mlock2		376
#define SYS_copy_file_range	377
#define SYS_preadv2		378
#define SYS_pwritev2		379
#define SYS_pkey_mprotect	380
#define SYS_pkey_alloc		381
#define SYS_pkey_free		382
