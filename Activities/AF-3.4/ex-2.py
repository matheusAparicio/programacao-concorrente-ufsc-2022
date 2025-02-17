from time import sleep
from random import randint
from threading import Thread, Semaphore

def produtor():
  global buffer
  for i in range(10):
    sleep(randint(0,2))           # fica um tempo produzindo...
    item = 'item ' + str(i)
    # verifica se há lugar no buffer
    semPosicoesDisponiveis.acquire()
    buffer.append(item)
    semPosicoesOcupadas.release()
    print('Produzido %s (ha %i itens no buffer)' % (item,len(buffer)))

def consumidor():
  global buffer
  for i in range(10):
    # aguarda que haja um item para consumir
    semPosicoesOcupadas.acquire()
    item = buffer.pop(0)
    semPosicoesDisponiveis.release()
    print('Consumido %s (ha %i itens no buffer)' % (item,len(buffer)))
    sleep(randint(0,2))         # fica um tempo consumindo...

buffer = []
tam_buffer = 3
# cria semáforos
produtor = Thread(target=produtor) 
consumidor = Thread(target=consumidor)

semPosicoesOcupadas = Semaphore(0)
semPosicoesDisponiveis = Semaphore(tam_buffer)

produtor.start()
consumidor.start()
produtor.join()
consumidor.join() 