/*
 * iperf, Copyright (c) 2014-2022, The Regents of the University of
 * California, through Lawrence Berkeley National Laboratory (subject
 * to receipt of any required approvals from the U.S. Dept. of
 * Energy).  All rights reserved.
 *
 * If you have questions about your rights to use or distribute this
 * software, please contact Berkeley Lab's Technology Transfer
 * Department at TTD@lbl.gov.
 *
 * NOTICE.  This software is owned by the U.S. Department of Energy.
 * As such, the U.S. Government has been granted for itself and others
 * acting on its behalf a paid-up, nonexclusive, irrevocable,
 * worldwide license in the Software to reproduce, prepare derivative
 * works, and perform publicly and display publicly.  Beginning five
 * (5) years after the date permission to assert copyright is obtained
 * from the U.S. Department of Energy, and subject to any subsequent
 * five (5) year renewals, the U.S. Government is granted for itself
 * and others acting on its behalf a paid-up, nonexclusive,
 * irrevocable, worldwide license in the Software to reproduce,
 * prepare derivative works, distribute copies to the public, perform
 * publicly and display publicly, and to permit others to do so.
 *
 * This code is distributed under a BSD style license, see the LICENSE
 * file for complete information.
 */
#ifndef        __IPERF_API_TYPES_H
#define        __IPERF_API_TYPES_H

#ifdef __cplusplus
extern "C" { /* open extern "C" */
#endif

struct iperf_test;

struct iperf_intermediate_results {
    double bitrate;
    double start_time;
    double end_time;
    double interval_time;
    double jitter_ms;
    double lost_pct;
    unsigned long bytes_transferred;
    unsigned long packets;
    unsigned long lost_packets;
    unsigned long omitted;
    unsigned long path_mtu;
    unsigned long retransmissions;
    unsigned long rtt;
    unsigned long rtt_var;
    unsigned long send_cwnd;
    unsigned long send_wnd;
    int protocol;
    int socket;
    int is_sender;
};

typedef void (*iperf_reporter_callback_t)(struct iperf_test*);
typedef void (*iperf_intermediate_results_callback_t)(struct iperf_test*, const struct iperf_intermediate_results*);

#ifdef __cplusplus
}
#endif

#endif
