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

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::_constructor(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    (this)->::x10::util::OptionsParser::_constructor(args, (__extension__ ({
                                                         
                                                         //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__38698 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__38698->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38809 = ::x10aux::makeStringLit("h"); strLit__38809; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38810 = ::x10aux::makeStringLit("help"); strLit__38810; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38811 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__38811; }))));
                                                         t__38698;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__38702 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)53ll), false);
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38812 = ::x10aux::makeStringLit("p"); strLit__38812; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38813 = ::x10aux::makeStringLit("problem"); strLit__38813; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38814 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__38814; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38815 = ::x10aux::makeStringLit("f"); strLit__38815; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38816 = ::x10aux::makeStringLit("problem_file"); strLit__38816; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38817 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__38817; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38818 = ::x10aux::makeStringLit("s"); strLit__38818; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38819 = ::x10aux::makeStringLit("size"); strLit__38819; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38820 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__38820; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38821 = ::x10aux::makeStringLit("S"); strLit__38821; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38822 = ::x10aux::makeStringLit("seed"); strLit__38822; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38823 = ::x10aux::makeStringLit("seed. Default 0"); strLit__38823; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38824 = ::x10aux::makeStringLit("sm"); strLit__38824; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38825 = ::x10aux::makeStringLit("solver_mode"); strLit__38825; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38826 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__38826; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38827 = ::x10aux::makeStringLit("ce"); strLit__38827; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38828 = ::x10aux::makeStringLit("Control Strategy"); strLit__38828; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38829 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__38829; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38830 = ::x10aux::makeStringLit("sl"); strLit__38830; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38831 = ::x10aux::makeStringLit("solver"); strLit__38831; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38832 = ::x10aux::makeStringLit("Solver to use"); strLit__38832; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38833 = ::x10aux::makeStringLit("of"); strLit__38833; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38834 = ::x10aux::makeStringLit("out_format"); strLit__38834; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38835 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__38835; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38836 = ::x10aux::makeStringLit("tf"); strLit__38836; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38837 = ::x10aux::makeStringLit("target_from"); strLit__38837; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38838 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__38838; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38839 = ::x10aux::makeStringLit("tc"); strLit__38839; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38840 = ::x10aux::makeStringLit("target_cost"); strLit__38840; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38841 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__38841; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38842 = ::x10aux::makeStringLit("b"); strLit__38842; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38843 = ::x10aux::makeStringLit("bench"); strLit__38843; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38844 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__38844; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38845 = ::x10aux::makeStringLit("pf"); strLit__38845; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38846 = ::x10aux::makeStringLit("param_file"); strLit__38846; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38847 = ::x10aux::makeStringLit("path of the parameters file"); strLit__38847; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38848 = ::x10aux::makeStringLit("v"); strLit__38848; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38849 = ::x10aux::makeStringLit("verify"); strLit__38849; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38850 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__38850; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38851 = ::x10aux::makeStringLit("ca"); strLit__38851; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38852 = ::x10aux::makeStringLit("comp_AVG"); strLit__38852; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38853 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__38853; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38854 = ::x10aux::makeStringLit("N"); strLit__38854; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38855 = ::x10aux::makeStringLit("nodes_per_team"); strLit__38855; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38856 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__38856; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38857 = ::x10aux::makeStringLit("U"); strLit__38857; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38858 = ::x10aux::makeStringLit("update"); strLit__38858; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38859 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__38859; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38860 = ::x10aux::makeStringLit("R"); strLit__38860; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38861 = ::x10aux::makeStringLit("report"); strLit__38861; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38862 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__38862; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38863 = ::x10aux::makeStringLit("C"); strLit__38863; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38864 = ::x10aux::makeStringLit("p_change_vector"); strLit__38864; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38865 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__38865; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38866 = ::x10aux::makeStringLit("I"); strLit__38866; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38867 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__38867; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38868 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__38868; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38869 = ::x10aux::makeStringLit("D"); strLit__38869; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38870 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__38870; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38871 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__38871; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38872 = ::x10aux::makeStringLit("W"); strLit__38872; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38873 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__38873; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38874 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__38874; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38875 = ::x10aux::makeStringLit("A"); strLit__38875; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38876 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__38876; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38877 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__38877; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38878 = ::x10aux::makeStringLit("O"); strLit__38878; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38879 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__38879; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38880 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__38880; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38881 = ::x10aux::makeStringLit("M"); strLit__38881; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38882 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__38882; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38883 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__38883; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38884 = ::x10aux::makeStringLit("CD"); strLit__38884; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38885 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__38885; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38886 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__38886; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38887 = ::x10aux::makeStringLit("P_e"); strLit__38887; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38888 = ::x10aux::makeStringLit("poolsize_elite"); strLit__38888; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38889 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__38889; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38890 = ::x10aux::makeStringLit("P_lm"); strLit__38890; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38891 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__38891; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38892 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__38892; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38893 = ::x10aux::makeStringLit("P_eM"); strLit__38893; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38894 = ::x10aux::makeStringLit("ep_mode"); strLit__38894; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38895 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__38895; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38896 = ::x10aux::makeStringLit("P_lmM"); strLit__38896; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38897 = ::x10aux::makeStringLit("lmp_mode"); strLit__38897; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38898 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__38898; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38899 = ::x10aux::makeStringLit("P_eD"); strLit__38899; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38900 = ::x10aux::makeStringLit("ep_dist"); strLit__38900; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38901 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__38901; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38902 = ::x10aux::makeStringLit("P_lmD"); strLit__38902; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38903 = ::x10aux::makeStringLit("lmp_dist"); strLit__38903; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38904 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__38904; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38905 = ::x10aux::makeStringLit("mt"); strLit__38905; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38906 = ::x10aux::makeStringLit("max_time"); strLit__38906; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38907 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__38907; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38908 = ::x10aux::makeStringLit("mi"); strLit__38908; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38909 = ::x10aux::makeStringLit("max_iter"); strLit__38909; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38910 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__38910; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38911 = ::x10aux::makeStringLit("mr"); strLit__38911; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38912 = ::x10aux::makeStringLit("max_restart"); strLit__38912; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38913 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__38913; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38914 = ::x10aux::makeStringLit("rp"); strLit__38914; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38915 = ::x10aux::makeStringLit("rep_partial"); strLit__38915; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38916 = ::x10aux::makeStringLit("report partial results"); strLit__38916; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38917 = ::x10aux::makeStringLit("dbg"); strLit__38917; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38918 = ::x10aux::makeStringLit("debug_terminal"); strLit__38918; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38919 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__38919; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38920 = ::x10aux::makeStringLit("AS_vtr"); strLit__38920; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38921 = ::x10aux::makeStringLit("AS_varToReset"); strLit__38921; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38922 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__38922; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38923 = ::x10aux::makeStringLit("AS_rp"); strLit__38923; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38924 = ::x10aux::makeStringLit("AS_resetPer"); strLit__38924; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38925 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__38925; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38926 = ::x10aux::makeStringLit("AS_flm"); strLit__38926; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38927 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__38927; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38928 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__38928; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38929 = ::x10aux::makeStringLit("AS_fs"); strLit__38929; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38930 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__38930; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38931 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__38931; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38932 = ::x10aux::makeStringLit("AS_rl"); strLit__38932; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38933 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__38933; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38934 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__38934; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38935 = ::x10aux::makeStringLit("AS_plm"); strLit__38935; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38936 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__38936; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38937 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__38937; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38938 = ::x10aux::makeStringLit("AS_e"); strLit__38938; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38939 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__38939; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38940 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__38940; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38941 = ::x10aux::makeStringLit("AS_fb"); strLit__38941; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38942 = ::x10aux::makeStringLit("AS_firstBest"); strLit__38942; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38943 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__38943; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38944 = ::x10aux::makeStringLit("EO_t"); strLit__38944; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38945 = ::x10aux::makeStringLit("EO_tau"); strLit__38945; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38946 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__38946; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38947 = ::x10aux::makeStringLit("EO_p"); strLit__38947; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38948 = ::x10aux::makeStringLit("EO_pdf"); strLit__38948; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38949 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__38949; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38950 = ::x10aux::makeStringLit("EO_ss"); strLit__38950; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38951 = ::x10aux::makeStringLit("EO_selSec"); strLit__38951; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38952 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__38952; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38953 = ::x10aux::makeStringLit("RoTS_t"); strLit__38953; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38954 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__38954; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38955 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__38955; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38956 = ::x10aux::makeStringLit("RoTS_a"); strLit__38956; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38957 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__38957; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38958 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__38958; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38959 = ::x10aux::makeStringLit("GA_pz"); strLit__38959; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38960 = ::x10aux::makeStringLit("GA_population_size"); strLit__38960; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38961 = ::x10aux::makeStringLit("Set the population size. Default 2*n"); strLit__38961; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38962 = ::x10aux::makeStringLit("if"); strLit__38962; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38963 = ::x10aux::makeStringLit("input_vector_file"); strLit__38963; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38964 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__38964; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38965 = ::x10aux::makeStringLit("bv"); strLit__38965; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38966 = ::x10aux::makeStringLit("model_baseValue"); strLit__38966; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38967 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__38967; }))));
                                                         t__38702->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)52ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__38968 = ::x10aux::makeStringLit("LNP_k"); strLit__38968; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38969 = ::x10aux::makeStringLit("LNP_k"); strLit__38969; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__38970 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__38970; }))));
                                                         t__38702;
                                                     }))
                                                     );
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__38971 = ::x10aux::makeStringLit("-pf"); strLit__38971; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__38972 = ::x10aux::makeStringLit("CPLS.param"); strLit__38972; })));
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    try {
        
        //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        this->FMGL(paramFile) = ::x10::io::File::_make(this->FMGL(paramFileName));
    }
    catch (::x10::lang::CheckedThrowable* __exc188) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc188)) {
            ::x10::io::IOException* id__4 = static_cast< ::x10::io::IOException*>(__exc188);
            {
                
                //#line 89 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
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



//#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::parseFile() {
    
    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals(this->FMGL(paramFile), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__38973 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__38973; }))));
        
        //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return;
    }
    
    //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__30728;
        for (line__30728 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__30728));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__30728));
            
            //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(line)->x10::lang::String::length(),
                                         ((x10_int)0)))) {
                continue;
            }
            
            //#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals((line)->charAt(((x10_int)0)),
                                         ((x10_char)'#'))))
            {
                continue;
            }
            
            //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            x10_int sepIndex = ::x10aux::nullCheck(line)->x10::lang::String::indexOf(
                                 this->FMGL(SEPARETOR));
            
            //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* key = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                         ((x10_int)0), sepIndex);
            
            //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* value = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                           ((sepIndex) + (((x10_int)1))));
            
            //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::Rail< ::x10::lang::String* >* res =
              this->cpls::ParamManager::myGet(key);
            
            //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(res, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                continue;
            } else {
                
                //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                ::x10::lang::Any* values = this->howManyValues(
                                             key);
                
                //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                if ((::x10aux::struct_equals((::x10aux::class_cast<x10_int>(values)),
                                             ((x10_int)0))))
                {
                    
                    //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10aux::nullCheck(this->FMGL(properties))->put(
                      key, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                            value));
                    
                    //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::util::Option option = ::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                                   key, ::x10::util::Option::FMGL(BAD__get)());
                    
                    //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if ((::x10aux::struct_equals(option, ::x10::util::Option::FMGL(BAD__get)())))
                    {
                        break;
                    }
                    
                    //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::lang::String* otherForm = option->otherForm(
                                                       key);
                    
                    //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if (((::x10aux::nullCheck(otherForm)->x10::lang::String::length()) > (((x10_int)0))))
                    {
                        ::x10aux::nullCheck(this->FMGL(properties))->put(
                          otherForm, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                                      value));
                    }
                    
                } else {
                    
                    //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    continue;
                }
                
            }
            
        }
    }
    
}

//#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
::x10::lang::Rail< ::x10::lang::String* >* cpls::ParamManager::myGet(
  ::x10::lang::String* key) {
    
    //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* winner = key;
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_boolean isValid = true;
    
    //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals((key)->charAt(((x10_int)0)),
                                 ((x10_char)'-')))) {
        
        //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       key, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            isValid = false;
        }
        
    } else {
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__38982 = ::x10aux::makeStringLit("-"); strLit__38982; })), key);
        
        //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__38985 = ::x10aux::makeStringLit("--"); strLit__38985; })), key);
            
            //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                           winner, ::x10::util::Option::FMGL(BAD__get)()),
                                         ::x10::util::Option::FMGL(BAD__get)())))
            {
                isValid = false;
            }
            
        }
        
    }
    
    //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if (isValid) {
        return ::x10aux::nullCheck(this->FMGL(properties))->getOrElse(
                 winner, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)0ll)));
        
    } else {
        
        //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::String* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
}

//#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::printParameters() {
    
    //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* problem = this->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__38990 = ::x10aux::makeStringLit("-p"); strLit__38990; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__38991 = ::x10aux::makeStringLit("MSP"); strLit__38991; })));
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__38992 = ::x10aux::makeStringLit("-f"); strLit__38992; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__38993 = ::x10aux::makeStringLit("."); strLit__38993; })));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__38994 = ::x10aux::makeStringLit("-s"); strLit__38994; })),
                                                     ((x10_int)10));
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__38995 = ::x10aux::makeStringLit("-sm"); strLit__38995; })),
                           ((x10_int)1));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__38996 = ::x10aux::makeStringLit("-mi"); strLit__38996; })),
                             ((x10_int)1000000000));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__38997 = ::x10aux::makeStringLit("-mt"); strLit__38997; })),
                         ((x10_long)0ll));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__38998 = ::x10aux::makeStringLit("-tc"); strLit__38998; })),
                            ((x10_int)0));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__38999 = ::x10aux::makeStringLit("-tf"); strLit__38999; })),
                           ((x10_long)0ll));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__39000 = ::x10aux::makeStringLit("-b"); strLit__39000; })),
                                                       ((x10_int)10));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__39001 = ::x10aux::makeStringLit("-sl"); strLit__39001; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__39002 = ::x10aux::makeStringLit("AS"); strLit__39002; })));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__39003 = ::x10aux::makeStringLit("-N"); strLit__39003; })),
                           ((x10_int)1));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__39004 = ::x10aux::makeStringLit("-U"); strLit__39004; })),
                                                        ((x10_int)0));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__39005 = ::x10aux::makeStringLit("-R"); strLit__39005; })),
                                                        ((x10_int)0));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__39006 = ::x10aux::makeStringLit("-C"); strLit__39006; })),
                           ((x10_int)100));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__39007 = ::x10aux::makeStringLit("-P_e"); strLit__39007; })),
                         ((x10_int)4));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__39008 = ::x10aux::makeStringLit("-I"); strLit__39008; })),
                         ((x10_long)0ll));
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__39009 = ::x10aux::makeStringLit("-D"); strLit__39009; })),
                               0.3);
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__39010 = ::x10aux::makeStringLit("-W"); strLit__39010; })),
                                                        ((x10_long)0ll));
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__39011 = ::x10aux::makeStringLit("-A"); strLit__39011; })),
                             0.0);
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__39012 = ::x10aux::makeStringLit("-M"); strLit__39012; })),
                            ((x10_int)1));
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__39013 = ::x10aux::makeStringLit("-CD"); strLit__39013; })),
                             ((x10_int)1));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__39014 = ::x10aux::makeStringLit("-if"); strLit__39014; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__39015 = ::x10aux::makeStringLit("."); strLit__39015; })));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__39016 = ::x10aux::makeStringLit("-of"); strLit__39016; })),
                          ((x10_int)1));
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39017 = ::x10aux::makeStringLit(""); strLit__39017; }))));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39018 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__39018; }))));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39019 = ::x10aux::makeStringLit("Problem "); strLit__39019; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__39020 = ::x10aux::makeStringLit(" size "); strLit__39020; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__39021 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__39021; }))), filePath)));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39022 = ::x10aux::makeStringLit(""); strLit__39022; }))));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39023 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__39023; }))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39024 = ::x10aux::makeStringLit("Solver: "); strLit__39024; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__39025 = ::x10aux::makeStringLit(", Mode: "); strLit__39025; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39026 = ::x10aux::makeStringLit("sequential"); strLit__39026; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__39027 = ::x10aux::makeStringLit("parallel"); strLit__39027; })))), (__extension__ ({ static ::x10::lang::String* strLit__39028 = ::x10aux::makeStringLit(", Limit: "); strLit__39028; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__39029 = ::x10aux::makeStringLit(" iterations or "); strLit__39029; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__39030 = ::x10aux::makeStringLit(" ms."); strLit__39030; })))));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39031 = ::x10aux::makeStringLit("Target cost from "); strLit__39031; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39032 = ::x10aux::makeStringLit("file. "); strLit__39032; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__39033 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__39033; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__39034 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__39034; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39035 = ::x10aux::makeStringLit(""); strLit__39035; }))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39036 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__39036; }))));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39037 = ::x10aux::makeStringLit("Using "); strLit__39037; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__39038 = ::x10aux::makeStringLit("Without "); strLit__39038; }))), (__extension__ ({ static ::x10::lang::String* strLit__39039 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__39039; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__39040 = ::x10aux::makeStringLit(" places. "); strLit__39040; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__39041 = ::x10aux::makeStringLit(" nodes per team "); strLit__39041; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__39042 = ::x10aux::makeStringLit(" Teams"); strLit__39042; })))));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39043 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__39043; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__39044 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__39044; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__39045 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__39045; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__39046 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__39046; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__39047 = ::x10aux::makeStringLit("%"); strLit__39047; })))));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39048 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__39048; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__39049 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__39049; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__39050 = ::x10aux::makeStringLit(" Initial delay "); strLit__39050; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__39051 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__39051; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__39052 = ::x10aux::makeStringLit("%"); strLit__39052; })))));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39053 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__39053; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39054 = ::x10aux::makeStringLit(" Change Vector "); strLit__39054; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__39055 = ::x10aux::makeStringLit(" - "); strLit__39055; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39056 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__39056; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__39057 = ::x10aux::makeStringLit(" - "); strLit__39057; }))))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39058 = ::x10aux::makeStringLit(""); strLit__39058; }))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39059 = ::x10aux::makeStringLit("Other Parameters:"); strLit__39059; }))));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39060 = ::x10aux::makeStringLit("Max threads "); strLit__39060; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__39061 = ::x10aux::makeStringLit(" NTHREADS "); strLit__39061; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39062 = ::x10aux::makeStringLit("Solving "); strLit__39062; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__39063 = ::x10aux::makeStringLit(" times each instance"); strLit__39063; })))));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39064 = ::x10aux::makeStringLit(" Input vector "); strLit__39064; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__39065 = ::x10aux::makeStringLit("."); strLit__39065; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39066 = ::x10aux::makeStringLit("not used"); strLit__39066; })))
        : (inputPath))));
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39067 = ::x10aux::makeStringLit(""); strLit__39067; }))));
}

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
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
