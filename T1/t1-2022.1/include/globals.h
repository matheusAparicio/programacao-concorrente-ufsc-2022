#ifndef __GLOBALS_H__
#define __GLOBALS_H__

#include "queue.h"
#include "table.h"
#include "buffet.h"



// Implementados pelo aluno ----------


/**
 * @brief
 * 
 */
extern void globals_set_worker_gate_can_pass(int bool);

/**
 * @brief
 * 
 * @return int 
 */

extern int globals_get_worker_gate_can_pass();


/**
 * @brief
 * 
 * @return int 
 */

extern int globals_sum_all_elements(int array[], int n);


/**
 * @brief
 * 
 */
extern void globals_set_buffet_number(int number);

/**
 * @brief
 * 
 * @return int 
 */

extern int globals_get_buffet_number();


/**
 * @brief
 * 
 */
extern void globals_set_students_inside(int number);

/**
 * @brief
 * 
 * @return int 
 */

extern int globals_get_students_inside();


/**
 * @brief
 * 
 */
extern void globals_set_all_students_entered(int bool);

/**
 * @brief
 * 
 * @return int 
 */

extern int globals_get_all_students_entered();


/**
 * @brief
 * 
 */
extern void globals_set_table_quantity(int number);

/**
 * @brief
 * 
 * @return int 
 */

extern int globals_get_table_quantity();



/**
 * @brief
 * 
 */
extern void globals_set_seats(int number);

/**
 * @brief
 * 
 * @return int 
 */

extern int globals_get_seats();

// Fim dos implementados pelo aluno ----------


/**
 * @brief Inicia uma fila (de modo global)
 * 
 * @param queue 
 */
extern void globals_set_queue(queue_t *queue);

/**
 * @brief Retorna uma fila (de modo global)
 * 
 * @return queue_t* 
 */
extern queue_t *globals_get_queue();

/**
 * @brief Insere o número de alunos (de modo global)
 * 
 */
extern void globals_set_students(int number);

/**
 * @brief Retorna o número de alunos (de modo global)
 * 
 * @return int 
 */

extern int globals_get_students();

/**
 * @brief Inicia um array de mesas (de modo global).
 * 
 * @param t 
 */
extern void globals_set_table(table_t *t);

/**
 * @brief Retorna um array de mesas (de modo global)
 * 
 * @return table_t* 
 */
extern table_t *globals_get_table();


/**
 * @brief Finaliza todas as variáveis globais.
 * 
 */
extern void globals_finalize();

/**
 * @brief Inicia um array de buffets (de modo global)
 * 
 */
extern void globals_set_buffets(buffet_t *buffets_ref);

/**
 * @brief Retorna um array de buffets (de modo global)
 * 
 * @return buffet_t* 
 */
extern buffet_t *globals_get_buffets();

#endif