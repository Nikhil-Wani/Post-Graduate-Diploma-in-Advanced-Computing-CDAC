import { HttpClient } from '@angular/common/http';
import { Observable } from 'rxjs';
import { Person } from "./person";
import { Injectable } from '@angular/core';
@Injectable()
export class PersonService{
    baseUrl="http://localhost:9090/PersonWebService123/persons";
    constructor(private http:HttpClient){};
    getAllPersons():Observable<Person[]>{
        return this.http.get<Person[]>(this.baseUrl);
    }
    addPerson(p:Person):Observable<Person[]>{
        return this.http.post<Person[]>(this.baseUrl,p);
    }
    updatePerson(p:Person):Observable<Person[]>{
        return this.http.put<Person[]>(this.baseUrl,p);
    }

    /*deletePerson(id:number):Observable<Person[]>{

    }*/
}