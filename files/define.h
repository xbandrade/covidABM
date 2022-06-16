/* Covid states */
#define  S                1             /* Susceptible individuals */
#define  E                2             /* Pre symptomatic */
#define  IP               3             /* LS individual already submitted to exogenous reinfection */
#define  IA               4             /* Infectious individuals asymptomatic */
#define  IS               5             /* Infectious individuals Symptomatic  */
#define  H                6             /* HospiTalized inidividual (ISSevere) */
#define  ICU              7             /* Individiual in ICU (ISSevere) */
#define  Recovered        8             /* Recovered from COVID-19 */
#define  DeadCovid        9             /* Dead due to covid */
#define  Dead             10            /* Dead due to natutal death */

/* Infectious Symptomatic states */
#define ISLight 	12
#define ISModerate	13
#define ISSevere    14

/* For random number generator */
#define MAXNUM 4294967295.             /* for 32 bits compilers */

#define DAYS 400  //365        /* Number of days simulated */
#define MAXSIM 96               /* Number of simulations to evaluate averages */

/*****  DEMOGRAPHIC PARAMETER ****/
#define Density 2   // 0 = low density, 1 = high density, 2 = Brazil

//#define IsolationState OFF       
//#define ProportionIsolated 0.8
//#define StartOfIsolation  0 // time to begin isolation (days)

#define IsolationYes 1
#define IsolationNo  0

/* simulation paprameters */
#define L 632              /* Linear size of the lattice */
#define N L*L

/** Beta for 300 average **/
#define Beta 0.27

#define AverageOcupationRateBeds    0.4     // average ocupation rate of hospital beds due to others diseases
#define AverageOcupationRateBedsICU 0.4     // average ocupation rate of hospital beds due to others diseases

/* Population parameters  - Initializion values 19/01/2021
#define  Eini                1214
#define  IPini               7024.08
#define  IAini               494.6
#define  ISLightini          813.44
#define  ISModerateini       140.6
#define  ISSevereini         50.2
#define  Hini                5
#define  ICUini              1
#define  Recoveredini        14298.8
#define  Vaccinatedini       18.96
#define  DeadCovidini        400*/ 

/* Population parameters  - Initializion values */
#define  Eini                0
#define  IPini               5
#define  IAini               0
#define  ISLightini          0
#define  ISModerateini       0
#define  ISSevereini         0
#define  Hini                0
#define  ICUini              0
#define  Recoveredini        0
#define  Vaccinatedini       0
#define  DeadCovidini        0
#define  Deadini             0

/* Disease parameters */

/* Probs of evolution between states */
#define ProbIPtoIA 0.33

//v https://www.cdc.gov/coronavirus/2019-ncov/hcp/clinical-guidance-management-patients.html
#define ProbHtoICU 0.29

#define ProbToBecomeISLight 0.81
#define ProbToBecomeISModerate 0.14
#define ProbToBecomeISSevere 0.05
#define ProbISLightToISModerate 0.10

/* Probs of Recovery < 60 */
#define ProbRecoveryModerateYounger 0.6
#define ProbRecoverySevereYounger 0.01
#define ProbRecoveryHYounger 1.0
#define ProbRecoveryICUYounger 0.5

/* Probs Recovery ISModerate for Elderly */
#define ProbRecoveryModerate_60_70 0.21
#define ProbRecoveryModerate_70_80 0.15
#define ProbRecoveryModerate_80_90 0.13
#define ProbRecoveryModerate_Greater90 0.10

/* Probs Recovery ISSevere for Elderly */
#define ProbRecoverySevere_60_70 0.00357
#define ProbRecoverySevere_70_80 0.00250
#define ProbRecoverySevere_80_90 0.00125
#define ProbRecoverySevere_Greater90 0.00167

/* Probs Recovery H for age > 20 */
#define ProbRecoveryH_20_30 0.959
#define ProbRecoveryH_30_40 0.962
#define ProbRecoveryH_40_50 0.938
#define ProbRecoveryH_50_60 0.897
#define ProbRecoveryH_60_70 0.842
#define ProbRecoveryH_70_80 0.678
#define ProbRecoveryH_80_90 0.457
#define ProbRecoveryH_Greater90 0.477

/* Probs Recovery ICU for Elderly */
#define ProbRecoveryICU_60_70 0.17857
#define ProbRecoveryICU_70_80 0.12500
#define ProbRecoveryICU_80_90 0.10417
#define ProbRecoveryICU_Greater90 0.08333

/* Time on states */
#define MinLatency 2.0           // days
#define MaxLatency 14.0          // days

#define MinIA 2.5   
#define MaxIA 10.0 

#define MinIP 2.5  
#define MaxIP 10.5 

#define MinISLight 2.5 
#define MaxISLight 14.5

#define MinISModerate 2.5 
#define MaxISModerate 14.5 

//https://www.ncbi.nlm.nih.gov/pmc/articles/PMC7589278/#:~:text=The%20time%20between%20symptom%20onset,a%20nursing%20home%20(additional%202
#define MinISSevere 3.0          // days
#define MaxISSevere 10.4         // days

//https://www.cdc.gov/coronavirus/2019-ncov/hcp/clinical-guidance-management-patients.html
#define MinH 3.0
#define MaxH 13.0

//https://bmcinfectdis.biomedcentral.com/articles/10.1186/s12879-021-06371-6#:~:text=ICU%20admission%20was%20estimated%20to,18.9%20days%20in%20critical%20care.
#define MinICU 8.4
#define MaxICU 16.4

#define ON 1
#define OFF 0

#define LOW 0
#define HIGH 1

#define BRAZIL 2
