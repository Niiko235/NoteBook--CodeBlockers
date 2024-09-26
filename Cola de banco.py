

def llegadaClientes(clientes, time, arrive):
    x = arrive
    while x <= time*60:
        clientes.append(x)
        x += arrive

def trabajar(clientes, aten, lisservidor, lisgoso, clientesaten): 
    servidor = lisservidor[0]
    goso = lisgoso[0]
    for i in clientes: 
        if servidor-i < 0: 
            goso += (servidor-i)*-1
            clientesaten.append(i)
            servidor += aten + ((servidor-i)*-1)
        elif servidor-i > 0 : 
            clientesaten.append(servidor)
            servidor += aten
        else: 
            clientesaten.append(i)
            servidor += aten
    lisgoso[0] = goso
    lisservidor[0] = servidor

arrive = 15 #cada cuanto llegara un cliente
aten = 16 #tiempo en la que se atienden los clientes 

time = int(input("Ingresa el numero de horas que el banco trabajara: "))
clientes = []
llegadaClientes(clientes, time, arrive)

#############################################################################
servidor = 0
goso = 0 
lisServidor = [servidor]
lisGoso = [goso]
clientesAten = []

trabajar(clientes,aten, lisServidor, lisGoso, clientesAten)
servidor = lisServidor[0]
goso = lisGoso[0]


print("#CLientes  tiempo de llegada      tiempo de atencion      tiempo de espera")
for i in range(len(clientes)): 
    print(str(i+1) + " \t\t" + str(clientes[i]) + "\t\t\t" + str(clientesAten[i]) + "\t\t\t" + str(abs(clientes[i]-clientesAten[i])))

print("tiempo total del servidor " + str(servidor))

print("Tiempo total de goso "  + str(goso))




