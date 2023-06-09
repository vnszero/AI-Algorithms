class Ridge:
    def __init__(self, city_origin:int, city_destiny:int, pheromone:float, heuristic:float):
        self.city_origin = city_origin
        self.city_destiny = city_destiny
        self.pheromone = pheromone
        self.heuristic = heuristic
    
    def get_city_origin(self) -> int:
        return self.city_origin
    
    def get_city_destiny(self) -> int:
        return self.city_destiny

    def get_pheromone(self) -> float:
        return self.pheromone
    
    def get_heuristic(self) -> float:
        return self.heuristic
    
    def __str__(self):
        return "origin:{}, destiny:{}, pheromone:{}, heuristic:{}".format(self.city_origin, self.city_destiny, self.pheromone, self.heuristic)