/*************************************************/
/* START of ParamManager */
#include <cpls/ParamManager.h>

#include <x10/util/OptionsParser.h>
#include <x10/lang/Char.h>
#include <x10/lang/String.h>
#include <x10/io/File.h>
#include <x10/lang/Rail.h>
#include <x10/util/Option.h>
#include <x10/lang/Unsafe.h>
#include <x10/io/IOException.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Iterator.h>
#include <x10/io/ReaderIterator.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Int.h>
#include <x10/util/HashMap.h>
#include <x10/util/Box.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Math.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <x10/compiler/Synthetic.h>

//#line 11 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 12 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::_constructor(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    (this)->::x10::util::OptionsParser::_constructor(args, (__extension__ ({
                                                         
                                                         //#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__31750 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__31750->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31861 = ::x10aux::makeStringLit("h"); strLit__31861; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31862 = ::x10aux::makeStringLit("help"); strLit__31862; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31863 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__31863; }))));
                                                         t__31750;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__31754 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)53ll), false);
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31864 = ::x10aux::makeStringLit("p"); strLit__31864; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31865 = ::x10aux::makeStringLit("problem"); strLit__31865; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31866 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__31866; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31867 = ::x10aux::makeStringLit("f"); strLit__31867; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31868 = ::x10aux::makeStringLit("problem_file"); strLit__31868; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31869 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__31869; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31870 = ::x10aux::makeStringLit("s"); strLit__31870; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31871 = ::x10aux::makeStringLit("size"); strLit__31871; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31872 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__31872; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31873 = ::x10aux::makeStringLit("S"); strLit__31873; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31874 = ::x10aux::makeStringLit("seed"); strLit__31874; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31875 = ::x10aux::makeStringLit("seed. Default 0"); strLit__31875; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31876 = ::x10aux::makeStringLit("sm"); strLit__31876; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31877 = ::x10aux::makeStringLit("solver_mode"); strLit__31877; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31878 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__31878; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31879 = ::x10aux::makeStringLit("ce"); strLit__31879; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31880 = ::x10aux::makeStringLit("Control Strategy"); strLit__31880; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31881 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__31881; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31882 = ::x10aux::makeStringLit("sl"); strLit__31882; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31883 = ::x10aux::makeStringLit("solver"); strLit__31883; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31884 = ::x10aux::makeStringLit("Solver to use"); strLit__31884; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31885 = ::x10aux::makeStringLit("of"); strLit__31885; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31886 = ::x10aux::makeStringLit("out_format"); strLit__31886; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31887 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__31887; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31888 = ::x10aux::makeStringLit("tf"); strLit__31888; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31889 = ::x10aux::makeStringLit("target_from"); strLit__31889; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31890 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__31890; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31891 = ::x10aux::makeStringLit("tc"); strLit__31891; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31892 = ::x10aux::makeStringLit("target_cost"); strLit__31892; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31893 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__31893; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31894 = ::x10aux::makeStringLit("b"); strLit__31894; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31895 = ::x10aux::makeStringLit("bench"); strLit__31895; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31896 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__31896; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31897 = ::x10aux::makeStringLit("pf"); strLit__31897; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31898 = ::x10aux::makeStringLit("param_file"); strLit__31898; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31899 = ::x10aux::makeStringLit("path of the parameters file"); strLit__31899; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31900 = ::x10aux::makeStringLit("v"); strLit__31900; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31901 = ::x10aux::makeStringLit("verify"); strLit__31901; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31902 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__31902; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31903 = ::x10aux::makeStringLit("ca"); strLit__31903; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31904 = ::x10aux::makeStringLit("comp_AVG"); strLit__31904; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31905 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__31905; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31906 = ::x10aux::makeStringLit("N"); strLit__31906; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31907 = ::x10aux::makeStringLit("nodes_per_team"); strLit__31907; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31908 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__31908; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31909 = ::x10aux::makeStringLit("U"); strLit__31909; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31910 = ::x10aux::makeStringLit("update"); strLit__31910; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31911 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__31911; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31912 = ::x10aux::makeStringLit("R"); strLit__31912; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31913 = ::x10aux::makeStringLit("report"); strLit__31913; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31914 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__31914; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31915 = ::x10aux::makeStringLit("C"); strLit__31915; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31916 = ::x10aux::makeStringLit("p_change_vector"); strLit__31916; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31917 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__31917; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31918 = ::x10aux::makeStringLit("I"); strLit__31918; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31919 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__31919; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31920 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__31920; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31921 = ::x10aux::makeStringLit("D"); strLit__31921; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31922 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__31922; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31923 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__31923; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31924 = ::x10aux::makeStringLit("W"); strLit__31924; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31925 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__31925; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31926 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__31926; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31927 = ::x10aux::makeStringLit("A"); strLit__31927; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31928 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__31928; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31929 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__31929; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31930 = ::x10aux::makeStringLit("O"); strLit__31930; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31931 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__31931; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31932 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__31932; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31933 = ::x10aux::makeStringLit("M"); strLit__31933; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31934 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__31934; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31935 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__31935; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31936 = ::x10aux::makeStringLit("CD"); strLit__31936; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31937 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__31937; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31938 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__31938; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31939 = ::x10aux::makeStringLit("P_e"); strLit__31939; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31940 = ::x10aux::makeStringLit("poolsize_elite"); strLit__31940; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31941 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__31941; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31942 = ::x10aux::makeStringLit("P_lm"); strLit__31942; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31943 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__31943; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31944 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__31944; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31945 = ::x10aux::makeStringLit("P_eM"); strLit__31945; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31946 = ::x10aux::makeStringLit("ep_mode"); strLit__31946; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31947 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__31947; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31948 = ::x10aux::makeStringLit("P_lmM"); strLit__31948; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31949 = ::x10aux::makeStringLit("lmp_mode"); strLit__31949; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31950 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__31950; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31951 = ::x10aux::makeStringLit("P_eD"); strLit__31951; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31952 = ::x10aux::makeStringLit("ep_dist"); strLit__31952; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31953 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__31953; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31954 = ::x10aux::makeStringLit("P_lmD"); strLit__31954; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31955 = ::x10aux::makeStringLit("lmp_dist"); strLit__31955; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31956 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__31956; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31957 = ::x10aux::makeStringLit("mt"); strLit__31957; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31958 = ::x10aux::makeStringLit("max_time"); strLit__31958; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31959 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__31959; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31960 = ::x10aux::makeStringLit("mi"); strLit__31960; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31961 = ::x10aux::makeStringLit("max_iter"); strLit__31961; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31962 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__31962; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31963 = ::x10aux::makeStringLit("mr"); strLit__31963; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31964 = ::x10aux::makeStringLit("max_restart"); strLit__31964; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31965 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__31965; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31966 = ::x10aux::makeStringLit("rp"); strLit__31966; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31967 = ::x10aux::makeStringLit("rep_partial"); strLit__31967; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31968 = ::x10aux::makeStringLit("report partial results"); strLit__31968; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31969 = ::x10aux::makeStringLit("dbg"); strLit__31969; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31970 = ::x10aux::makeStringLit("debug_terminal"); strLit__31970; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31971 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__31971; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31972 = ::x10aux::makeStringLit("AS_vtr"); strLit__31972; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31973 = ::x10aux::makeStringLit("AS_varToReset"); strLit__31973; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31974 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__31974; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31975 = ::x10aux::makeStringLit("AS_rp"); strLit__31975; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31976 = ::x10aux::makeStringLit("AS_resetPer"); strLit__31976; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31977 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__31977; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31978 = ::x10aux::makeStringLit("AS_flm"); strLit__31978; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31979 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__31979; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31980 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__31980; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31981 = ::x10aux::makeStringLit("AS_fs"); strLit__31981; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31982 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__31982; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31983 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__31983; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31984 = ::x10aux::makeStringLit("AS_rl"); strLit__31984; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31985 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__31985; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31986 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__31986; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31987 = ::x10aux::makeStringLit("AS_plm"); strLit__31987; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31988 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__31988; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31989 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__31989; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31990 = ::x10aux::makeStringLit("AS_e"); strLit__31990; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31991 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__31991; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31992 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__31992; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31993 = ::x10aux::makeStringLit("AS_fb"); strLit__31993; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31994 = ::x10aux::makeStringLit("AS_firstBest"); strLit__31994; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31995 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__31995; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31996 = ::x10aux::makeStringLit("EO_t"); strLit__31996; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31997 = ::x10aux::makeStringLit("EO_tau"); strLit__31997; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__31998 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__31998; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__31999 = ::x10aux::makeStringLit("EO_p"); strLit__31999; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32000 = ::x10aux::makeStringLit("EO_pdf"); strLit__32000; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32001 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__32001; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32002 = ::x10aux::makeStringLit("EO_ss"); strLit__32002; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32003 = ::x10aux::makeStringLit("EO_selSec"); strLit__32003; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32004 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__32004; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32005 = ::x10aux::makeStringLit("RoTS_t"); strLit__32005; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32006 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__32006; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32007 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__32007; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32008 = ::x10aux::makeStringLit("RoTS_a"); strLit__32008; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32009 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__32009; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32010 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__32010; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32011 = ::x10aux::makeStringLit("GA_pz"); strLit__32011; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32012 = ::x10aux::makeStringLit("GA_population_size"); strLit__32012; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32013 = ::x10aux::makeStringLit("Set the population size. Default 2*n"); strLit__32013; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32014 = ::x10aux::makeStringLit("if"); strLit__32014; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32015 = ::x10aux::makeStringLit("input_vector_file"); strLit__32015; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32016 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__32016; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32017 = ::x10aux::makeStringLit("bv"); strLit__32017; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32018 = ::x10aux::makeStringLit("model_baseValue"); strLit__32018; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32019 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__32019; }))));
                                                         t__31754->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)52ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32020 = ::x10aux::makeStringLit("LNP_k"); strLit__32020; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32021 = ::x10aux::makeStringLit("LNP_k"); strLit__32021; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32022 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__32022; }))));
                                                         t__31754;
                                                     }))
                                                     );
    
    //#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    
    //#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 84 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__32023 = ::x10aux::makeStringLit("-pf"); strLit__32023; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__32024 = ::x10aux::makeStringLit("CPLS.param"); strLit__32024; })));
    
    //#line 85 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    try {
        
        //#line 86 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        this->FMGL(paramFile) = ::x10::io::File::_make(this->FMGL(paramFileName));
    }
    catch (::x10::lang::CheckedThrowable* __exc163) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc163)) {
            ::x10::io::IOException* id__6 = static_cast< ::x10::io::IOException*>(__exc163);
            {
                
                //#line 90 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                this->FMGL(paramFile) = (::x10aux::class_cast_unchecked< ::x10::io::File*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        } else
        throw;
    }
}
::cpls::ParamManager* cpls::ParamManager::_make(::x10::lang::Rail< ::x10::lang::String* >* args)
{
    ::cpls::ParamManager* this_ = new (::x10aux::alloc_z< ::cpls::ParamManager>()) ::cpls::ParamManager();
    this_->_constructor(args);
    return this_;
}



//#line 94 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::parseFile() {
    
    //#line 95 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals(this->FMGL(paramFile), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 96 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32025 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__32025; }))));
        
        //#line 97 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return;
    }
    
    //#line 100 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__23730;
        for (line__23730 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__23730));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__23730));
            
            //#line 102 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(line)->x10::lang::String::length(),
                                         ((x10_int)0)))) {
                continue;
            }
            
            //#line 103 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals((line)->charAt(((x10_int)0)),
                                         ((x10_char)'#'))))
            {
                continue;
            }
            
            //#line 105 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            x10_int sepIndex = ::x10aux::nullCheck(line)->x10::lang::String::indexOf(
                                 this->FMGL(SEPARETOR));
            
            //#line 106 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* key = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                         ((x10_int)0), sepIndex);
            
            //#line 107 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* value = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                           ((sepIndex) + (((x10_int)1))));
            
            //#line 108 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::Rail< ::x10::lang::String* >* res =
              this->cpls::ParamManager::myGet(key);
            
            //#line 112 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(res, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 114 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                continue;
            } else {
                
                //#line 117 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                ::x10::lang::Any* values = this->howManyValues(
                                             key);
                
                //#line 119 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                if ((::x10aux::struct_equals((::x10aux::class_cast<x10_int>(values)),
                                             ((x10_int)0))))
                {
                    
                    //#line 122 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10aux::nullCheck(this->FMGL(properties))->put(
                      key, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                            value));
                    
                    //#line 123 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::util::Option option = ::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                                   key, ::x10::util::Option::FMGL(BAD__get)());
                    
                    //#line 124 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if ((::x10aux::struct_equals(option, ::x10::util::Option::FMGL(BAD__get)())))
                    {
                        break;
                    }
                    
                    //#line 125 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::lang::String* otherForm = option->otherForm(
                                                       key);
                    
                    //#line 126 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if (((::x10aux::nullCheck(otherForm)->x10::lang::String::length()) > (((x10_int)0))))
                    {
                        ::x10aux::nullCheck(this->FMGL(properties))->put(
                          otherForm, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                                      value));
                    }
                    
                } else {
                    
                    //#line 130 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    continue;
                }
                
            }
            
        }
    }
    
}

//#line 137 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
::x10::lang::Rail< ::x10::lang::String* >* cpls::ParamManager::myGet(
  ::x10::lang::String* key) {
    
    //#line 138 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* winner = key;
    
    //#line 139 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_boolean isValid = true;
    
    //#line 140 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals((key)->charAt(((x10_int)0)),
                                 ((x10_char)'-')))) {
        
        //#line 141 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       key, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            isValid = false;
        }
        
    } else {
        
        //#line 143 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32034 = ::x10aux::makeStringLit("-"); strLit__32034; })), key);
        
        //#line 144 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 145 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32037 = ::x10aux::makeStringLit("--"); strLit__32037; })), key);
            
            //#line 146 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                           winner, ::x10::util::Option::FMGL(BAD__get)()),
                                         ::x10::util::Option::FMGL(BAD__get)())))
            {
                isValid = false;
            }
            
        }
        
    }
    
    //#line 149 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if (isValid) {
        return ::x10aux::nullCheck(this->FMGL(properties))->getOrElse(
                 winner, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)0ll)));
        
    } else {
        
        //#line 152 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::String* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
}

//#line 156 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::printParameters() {
    
    //#line 157 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* problem = this->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__32042 = ::x10aux::makeStringLit("-p"); strLit__32042; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__32043 = ::x10aux::makeStringLit("MSP"); strLit__32043; })));
    
    //#line 158 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__32044 = ::x10aux::makeStringLit("-f"); strLit__32044; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__32045 = ::x10aux::makeStringLit("."); strLit__32045; })));
    
    //#line 159 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__32046 = ::x10aux::makeStringLit("-s"); strLit__32046; })),
                                                     ((x10_int)10));
    
    //#line 160 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__32047 = ::x10aux::makeStringLit("-sm"); strLit__32047; })),
                           ((x10_int)1));
    
    //#line 161 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__32048 = ::x10aux::makeStringLit("-mi"); strLit__32048; })),
                             ((x10_int)1000000000));
    
    //#line 162 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__32049 = ::x10aux::makeStringLit("-mt"); strLit__32049; })),
                         ((x10_long)0ll));
    
    //#line 163 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__32050 = ::x10aux::makeStringLit("-tc"); strLit__32050; })),
                            ((x10_int)0));
    
    //#line 164 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__32051 = ::x10aux::makeStringLit("-tf"); strLit__32051; })),
                           ((x10_long)0ll));
    
    //#line 165 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__32052 = ::x10aux::makeStringLit("-b"); strLit__32052; })),
                                                       ((x10_int)10));
    
    //#line 166 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__32053 = ::x10aux::makeStringLit("-sl"); strLit__32053; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__32054 = ::x10aux::makeStringLit("AS"); strLit__32054; })));
    
    //#line 167 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__32055 = ::x10aux::makeStringLit("-N"); strLit__32055; })),
                           ((x10_int)1));
    
    //#line 168 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__32056 = ::x10aux::makeStringLit("-U"); strLit__32056; })),
                                                        ((x10_int)0));
    
    //#line 169 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__32057 = ::x10aux::makeStringLit("-R"); strLit__32057; })),
                                                        ((x10_int)0));
    
    //#line 170 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__32058 = ::x10aux::makeStringLit("-C"); strLit__32058; })),
                           ((x10_int)100));
    
    //#line 171 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__32059 = ::x10aux::makeStringLit("-P_e"); strLit__32059; })),
                         ((x10_int)4));
    
    //#line 172 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__32060 = ::x10aux::makeStringLit("-I"); strLit__32060; })),
                         ((x10_long)0ll));
    
    //#line 173 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__32061 = ::x10aux::makeStringLit("-D"); strLit__32061; })),
                               0.3);
    
    //#line 174 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__32062 = ::x10aux::makeStringLit("-W"); strLit__32062; })),
                                                        ((x10_long)0ll));
    
    //#line 175 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__32063 = ::x10aux::makeStringLit("-A"); strLit__32063; })),
                             0.0);
    
    //#line 176 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__32064 = ::x10aux::makeStringLit("-M"); strLit__32064; })),
                            ((x10_int)1));
    
    //#line 177 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__32065 = ::x10aux::makeStringLit("-CD"); strLit__32065; })),
                             ((x10_int)1));
    
    //#line 178 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__32066 = ::x10aux::makeStringLit("-if"); strLit__32066; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__32067 = ::x10aux::makeStringLit("."); strLit__32067; })));
    
    //#line 179 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__32068 = ::x10aux::makeStringLit("-of"); strLit__32068; })),
                          ((x10_int)1));
    
    //#line 181 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32069 = ::x10aux::makeStringLit(""); strLit__32069; }))));
    
    //#line 182 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32070 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__32070; }))));
    
    //#line 183 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32071 = ::x10aux::makeStringLit("Problem "); strLit__32071; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__32072 = ::x10aux::makeStringLit(" size "); strLit__32072; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__32073 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__32073; }))), filePath)));
    
    //#line 184 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32074 = ::x10aux::makeStringLit(""); strLit__32074; }))));
    
    //#line 185 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32075 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__32075; }))));
    
    //#line 186 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32076 = ::x10aux::makeStringLit("Solver: "); strLit__32076; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__32077 = ::x10aux::makeStringLit(", Mode: "); strLit__32077; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__32078 = ::x10aux::makeStringLit("sequential"); strLit__32078; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__32079 = ::x10aux::makeStringLit("parallel"); strLit__32079; })))), (__extension__ ({ static ::x10::lang::String* strLit__32080 = ::x10aux::makeStringLit(", Limit: "); strLit__32080; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__32081 = ::x10aux::makeStringLit(" iterations or "); strLit__32081; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__32082 = ::x10aux::makeStringLit(" ms."); strLit__32082; })))));
    
    //#line 187 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32083 = ::x10aux::makeStringLit("Target cost from "); strLit__32083; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__32084 = ::x10aux::makeStringLit("file. "); strLit__32084; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__32085 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__32085; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__32086 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__32086; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 190 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32087 = ::x10aux::makeStringLit(""); strLit__32087; }))));
    
    //#line 191 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32088 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__32088; }))));
    
    //#line 192 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__32089 = ::x10aux::makeStringLit("Using "); strLit__32089; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__32090 = ::x10aux::makeStringLit("Without "); strLit__32090; }))), (__extension__ ({ static ::x10::lang::String* strLit__32091 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__32091; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__32092 = ::x10aux::makeStringLit(" places. "); strLit__32092; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__32093 = ::x10aux::makeStringLit(" nodes per team "); strLit__32093; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__32094 = ::x10aux::makeStringLit(" Teams"); strLit__32094; })))));
    
    //#line 193 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32095 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__32095; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__32096 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__32096; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__32097 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__32097; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__32098 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__32098; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__32099 = ::x10aux::makeStringLit("%"); strLit__32099; })))));
    
    //#line 194 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32100 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__32100; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__32101 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__32101; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__32102 = ::x10aux::makeStringLit(" Initial delay "); strLit__32102; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__32103 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__32103; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__32104 = ::x10aux::makeStringLit("%"); strLit__32104; })))));
    
    //#line 195 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32105 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__32105; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__32106 = ::x10aux::makeStringLit(" Change Vector "); strLit__32106; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__32107 = ::x10aux::makeStringLit(" - "); strLit__32107; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__32108 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__32108; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__32109 = ::x10aux::makeStringLit(" - "); strLit__32109; }))))));
    
    //#line 196 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32110 = ::x10aux::makeStringLit(""); strLit__32110; }))));
    
    //#line 197 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32111 = ::x10aux::makeStringLit("Other Parameters:"); strLit__32111; }))));
    
    //#line 198 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32112 = ::x10aux::makeStringLit("Max threads "); strLit__32112; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__32113 = ::x10aux::makeStringLit(" NTHREADS "); strLit__32113; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 199 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32114 = ::x10aux::makeStringLit("Solving "); strLit__32114; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__32115 = ::x10aux::makeStringLit(" times each instance"); strLit__32115; })))));
    
    //#line 200 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32116 = ::x10aux::makeStringLit(" Input vector "); strLit__32116; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__32117 = ::x10aux::makeStringLit("."); strLit__32117; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__32118 = ::x10aux::makeStringLit("not used"); strLit__32118; })))
        : (inputPath))));
    
    //#line 201 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32119 = ::x10aux::makeStringLit(""); strLit__32119; }))));
}

//#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
::cpls::ParamManager* cpls::ParamManager::cpls__ParamManager____this__cpls__ParamManager(
  ) {
    return this;
    
}
void cpls::ParamManager::__fieldInitializers_cpls_ParamManager(
  ) {
    this->FMGL(SEPARETOR) = ((x10_char)' ');
}
const ::x10aux::serialization_id_t cpls::ParamManager::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::ParamManager::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::ParamManager::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::util::OptionsParser::_serialize_body(buf);
    buf.write(this->FMGL(paramFileName));
    buf.write(this->FMGL(paramFile));
    buf.write(this->FMGL(SEPARETOR));
    
}

::x10::lang::Reference* ::cpls::ParamManager::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::ParamManager* this_ = new (::x10aux::alloc_z< ::cpls::ParamManager>()) ::cpls::ParamManager();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::ParamManager::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::util::OptionsParser::_deserialize_body(buf);
    FMGL(paramFileName) = buf.read< ::x10::lang::String*>();
    FMGL(paramFile) = buf.read< ::x10::io::File*>();
    FMGL(SEPARETOR) = buf.read<x10_char>();
}

::x10aux::RuntimeType cpls::ParamManager::rtt;
void cpls::ParamManager::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::util::OptionsParser>()};
    rtt.initStageTwo("cpls.ParamManager",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of ParamManager */
/*************************************************/
